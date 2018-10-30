#include<stdio.h>

int main(){

	int T, N, i, mid, j;

	scanf("%d", &T);

	for(j=1; j<=T; j++){

        scanf("%d", &N);

        printf("Case %d: 1 ", j);

        mid = N/2 + 1;

        for(i=2; i < mid; i++){
            if(N % i == 0){
                printf("%d ", i);
            }
        }
        if(N == 1){
            printf("\n");
            continue;
        }
        printf("%d\n", N);
	}

	return 0;
}

