#include<stdio.h>

int main()
{
	int T, N, i;
	long long int factorial = 1;

	scanf("%d", &T);
	while(T--)
	{

		scanf("%d", &N);

		factorial = 1;
		for(i = 2; i<=N; i++){
			factorial *= i;
		}

		printf("%lld\n", factorial);

	}

	return 0;
}