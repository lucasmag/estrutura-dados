#include<stdio.h>
#include <stdlib.h>

int main(){
	int *X;
	int lowest, lowest_index, i, N;

	scanf("%d", &N);

	X = (int *) malloc(N * sizeof(int));

	for(i=0; i<N; i++){
		scanf("%d", &X[i]);
	}

	lowest = X[0];
	lowest_index = 0;

	for(i=0; i<N; i++){
		if(X[i] < lowest){
			lowest = X[i];
			lowest_index = i;
		}
	}

	printf("Menor valor: %d\n", lowest);
	printf("Posicao: %d\n", lowest_index);

	free(X);
	return 0;
}
