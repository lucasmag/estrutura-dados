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

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
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
