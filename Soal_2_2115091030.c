/*
Marselinus Harson Rewo
2115091030
A
*/

#include <stdio.h>
#include <conio.h>


int main (){
	printf("==============================Program menampilkan Nilai setelah nilai maksimum==============================\n\n");
	//deklarasi dan inisialisasi variabel
	int n, 
        i,  
        x ;
	//minta inputan jumlah elemen array
	printf("input jumlah elemen arrray : ");
	scanf("%d", &n);
	int arr[n];//jumlah elemen array diisi sesaui yang diinput user

	//perulangan untuk meminta inputan nilai setiap elemen array
	for (i=1 ; i <= n; i++){
		printf("nilai ke-%d: ", i);	
		scanf("%i", &arr[i]);	
	}
	
	//inisialisasi nilai max dan posmax
	int posmax = 1,
		max = arr[1];

	//proses mencari nilai max dan posmax
	for (i=2;i<=n;i++){
		if (arr[i] > max){
		max = arr[i];
		posmax = 1;	
		}
	}
	printf ("\nnilai maksimum : %i", max);

	//menentukan jenis bilangan setelah nilai max
		if ( posmax  == n){
			printf("\nNULL\n");
		}
		if(posmax!=n){ 
			x = arr[posmax + 1];
			if (x % 2!= 0 ){
				printf("\nNilai setelah nilai max merupakan: Bilangan Ganjil\n");
			}
			if(x%2 == 0){
				printf("\nnilai setelah nilai max merupakan: Bilangan Genap\n");
			}
		}
		
	getch();
	return 0;

}
