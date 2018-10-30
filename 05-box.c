#include<stdio.h>

int main(){

	int T, N, i, j;

	scanf("%d", &T);

	while(T--){

        scanf("%d", &N);

        for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                printf("*");
            }
            printf("\n");
        }

        printf("\n");
	}

	return 0;
}

