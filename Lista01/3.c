#include <stdio.h>

int main(){
    float M[12][12];
    int C, i, j;
    char T;
    float result = 0;

    scanf("%d", &C);
    scanf(" %c", &T);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    if(T == 'S'){
        for(i = 0; i < 12 ; i++){
            result += M[i][C];
        }
        printf("%.1f\n", result);
    }

    if(T == 'M'){
        for(i = 0; i < 12 ; i++){
            result += M[i][C];
        }
        printf("%.1f\n", result / 12);
    }

    return 0;
}
