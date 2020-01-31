// Solution of URI 1176 - Fibonacci Array

#include <stdio.h>

int main () {
    int T, N, i;
    unsigned long long int fib [60];

    fib [0] = 0;
    fib [1] = 1;

    for(i = 2; i <= 60; i++){
        fib [i] = fib [i-1] + fib [i-2];
    }

    scanf("%d", &T);

    for(i = 1; i <= T; i++){
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }
    return 0;
}
