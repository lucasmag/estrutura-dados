#include <stdio.h>
#include <string.h>

int main (){
    int a[5] = {10, 20, 30, 40, 50};
    int b[5] = {5, 15, 25, 35, 45};
    int c[10];

    memcpy(c, a, sizeof(a));
    memcpy(c + 5, b, sizeof(b));

    for(int i = 0 ; i < 10 ; i++){
        printf("%d ", c[i]);
    }

    printf("\n");
    return 0;
}
