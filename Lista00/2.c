/*
02. Considere duas matrizes A e B com dimensões 5X3. Elabore um algoritmo que
construa uma matriz C de dimensão 2X15, de modo que a primeira linha de C seja
preenchida com os elementos de A e a segunda linha de C seja preenchida com os
elementos de B. 
*/

#include <stdio.h>
#include <string.h>

int main (){
    int a[5][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9},
                   {10, 11, 12},
                   {13, 14, 15}};

    int b[5][3] = {{20, 21, 22},
                   {23, 24, 25},
                   {26, 27, 28},
                   {29, 30, 31},
                   {32, 33, 34}};

    int c[2][15];
    int x = 0;

	//Preenche a primeira linha da matriz c
    for(int i = 0 ; i < 5 ; i++){
      for (int j = 0; j < 3; j++) {
        c[0][x] = a[i][j];
        printf("%d ", c[0][x]);
        x++;
      }
    }

    x = 0;
	
	//Preenche a segunda linha da matriz c
    for(int i = 0 ; i < 5 ; i++){
      for (int j = 0; j < 3; j++) {
        c[1][x] = b[i][j];
        printf("%d ", c[1][x]);
        x++;
      }
    }

    printf("\n");
    return 0;
}
