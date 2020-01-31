/*
01. Suponha que existam 02 vetores A e B do tipo inteiro com 05 elementos inteiros
cada. Elabore um algoritmo que construa um vetor C a partir da junção de A e B.
*/


#include <stdio.h>
#include <string.h>

int main (){
    int a[5] = {10, 20, 30, 40, 50};
    int b[5] = {5, 15, 25, 35, 45};
    int c[10];

    for(int j = 0; j < 10 ; j++){
    	if(j < 5){
    		c[j] = a[j];
		} else {
			c[j] = b[j-5];
		}
		printf("%d ", c[j]);
	}

    printf("\n");
    return 0;
}
