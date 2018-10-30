#include<stdio.h>

//int multiple(int x, int n);

int main()
{
    int T, X, N, i;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d", &X, &N);

        if (X > N)
        {
            printf("Invalid!\n");
        }

        else
        {
            multiple_optimized(X, N);
        }
    }

    return 0;
}

/*
int multiple(int x, int n)
{
    int i, mul;

    for(i = 1; i <= n; i++)
    {
        mul = x * i;

        if( mul <= n)
        {
            printf("%d\n", mul);
        }
        else
        {
            return 0;
        }
    }
}
*/

void multiple_optimized(int x, int n)
{
    int i;

    for(i = x; i <= n; i += x)
    {
        printf("%d\n", i);
    }
}
