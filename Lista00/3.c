/*
03. Escreva um programa que, leia um determinado n�mero N e informe os dois
antecessores de N e os dois sucessores de N. 
*/

#include <stdio.h>
#include <string.h>

int main (){
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Antecessores de %d: %d e %d\n", num1, num1-2, num1-1);
    printf("Sucessores de %d: %d e %d\n", num1, num1+1, num1+2);

    return 0;
}
