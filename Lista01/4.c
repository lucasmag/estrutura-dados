#include<stdio.h>


int main(){
    int i, j, N, x;

	do {
        scanf("%d",&N);

        for(i = 1 ; i <= N ; i++){
            for(j = 1 ; j <= N ; j++){
                x = i;

                if(j < x){
					x = j;
				}
				if(N-i+1 < x) {
					x = N-i+1;
				}
				if(N-j+1 < x){
					x = N-j+1;
				}

                printf("%3d", x);

                if(j < N){
					printf(" ");
				} else{
					printf("\n");
				}
            }
        }
        printf("\n");

    } while(N != 0);

    return 0;
}
