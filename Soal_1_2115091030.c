/*
Marselinus Harson Rewo
2115091030
A
*/
#include <conio.h>
#include <stdio.h>


int main(){
	printf("=======Program mencari nilai maksimum terbesar dan minimum terkecil dari 2 array===============\n\n");

    int arrA[100], 
        arrB[100], 
        i,
        n,
        maxA=1,
        minA=1,
        maxB=1,
        minB=1;



    //miinta inputan user untuk jumlah elemen array A
    printf("masukkan jumlah elemen array A (maksimum 100): ");
    scanf("%d", &n);

    //perulangan unutk meminta user memasukkan nilai untuk setiap elemen array A
    for(i=1;i<=n;i++){
        printf("elemen ke-%d: ", i);
        scanf("%d", &arrA[i]);
    }

    //miinta inputan user untuk jumlah elemen array B
    printf("masukkan jumlah elemen array B: ");
    scanf("%d", &n);

    //perulangan unutk meminta user memasukkan nilai untuk setiap elemen array B
    for(i=1;i<=n;i++){
        printf("elemen ke-%d: ", i);
        scanf("%d", &arrB[i]);
    }
    
    //Proses mencari maxA dan minA
	for (i =2; i <=n; i++){
		
		if (arrA[i] > maxA){
		maxA = arrA[i];
		}
		if (arrA[i] < maxA){
		minA = arrA[i];
		}
	
	}
    //Proses mencari max dan min B
	for (i =2; i <=n; i++){
		if (arrB[i] > maxB){
		maxB = arrB[i];
		}
		if (arrB[i] < minB){
		minB = arrB[i];
		}
	}

    //Prosec mencari max terbesar dari kedua max array
    if (maxA>maxB){
        printf("\nnilai maksimum terbesar dari 2 array adalah: %d", maxA);
    }else if (maxA<maxB){
        printf("\nnilai maksimum terbesar dari 2 array adalah: %d", maxB);
    }

    //Prosec mencari min terkecil dari kedua main array
    if (minA<minB){
        printf("\nnilai minimum terkecil diantara 2 array adalah: %d", minA);
    }else if (minA>minB){
        printf("\nnilai minimum terkecil diantara 2 array adalah: %d", minB);
    }


    getch();
    return 0;
}
