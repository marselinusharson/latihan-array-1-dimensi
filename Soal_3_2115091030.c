/*
Marselinus Harson Rewo 
A
2115091030
*/


#include <stdio.h>
#include <conio.h>

int main (){
	printf("=============================Program menampilkan Nilai sebelum nilai minimum=====================\n\n");
	int n, 
        min, 
        i,  
        posmin, 
        x ;

	printf("Jumlah elemen array: ");
	scanf("%d", &n );
	int arr[n];

	for (i=1 ; i <= n; i++){
		printf("nilai ke-%d: ", i);	
		scanf("%d", &arr[i])	;
	}
	//procces
	min = arr[1];
	posmin = 1;
	for (i =2; i <=n; i++){
		if (arr[i] < min){
		min = arr[i];
		posmin = i;	
		}
	
	}
	printf("\nnilai minimum: %d", min);
		if 	( posmin  == 1){
			printf("\nNULL\n");
		} else if(posmin>1){ 
			x = arr[posmin - 1];
			if (x % 2!= 0 ){
				printf("\nNilai sebelumnya: Ganjil\n");
			}else {
				printf("\nNilai sebelumnya: Genap");
			}
		}
getch();
	return 0;

}
