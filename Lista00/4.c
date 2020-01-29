/*
04. Ler duas matrizes A e B, de duas dimensões, sendo a matriz A de 5X4 (5 linhas e 4
colunas) e a matriz B de 4X3 (quatro linhas e três colunas). Apresentar a matriz C
como resultado da multiplicação das matrizes A e B. Condição para multiplicação:
o número de colunas de A tem que ser igual ao número de linhas de B.
*/

#include <stdio.h>
#include <string.h>

int main (){
    int a[5][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16},
                   {17, 18, 19, 20}};

    int b[4][3] = {{30, 31, 32},
                   {33, 34, 35},
                   {36, 37, 38},
                   {39, 40, 41}};

    int c[5][3];
    int element = 0;

    for (int i = 0; i < 5; i++) { //Percorre linhas de 'a'
        for (int j = 0; j < 3; j++) { //Percorre colunas de 'b'
            for (int k = 0; k < 4; k++) { //Percorre elementos das linhas de 'a'
                element += a[i][k] * b[k][j];
            }
            c[i][j] = element;
            element = 0;
        }
    }

    for (int m = 0; m < 5; m++) {
        for (int n = 0; n < 3; n++) {
            printf("%d ", c[m][n]);
        }
        printf("\n");
    }
    
    return 0;
}
