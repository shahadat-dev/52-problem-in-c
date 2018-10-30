#include<stdio.h>

int main(){

	int T, N;

	scanf("%d", &T);

	while(T--){

        scanf("%d", &N);

        printf("Sum = %d\n", N/10000 + N%10);
	}

	return 0;
}

