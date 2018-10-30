#include<stdio.h>

void diamond(int n, int m);

int main()
{
    int T, n, m;

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d", &n, &m);
        diamond(n, m);
    }

    return 0;
}

void diamond(int n, int m)
{
    int i, j, row;

    row = 2 * n - 1;

    for(i = 1; i <= row; i++)
    {
        if(i <= n)
        {
            for(j = 1; j <= i; j++)
            {
                printf("%d", m);
            }
            printf("\n");
        }
        else
        {
            for(j = row - i + 1; j >= 1; j--)
            {
                printf("%d", m);
            }
            printf("\n");
        }
    }
    printf("\n");
}
