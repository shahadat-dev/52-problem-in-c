#include<stdio.h>

int check(int ara[], int n);

int main()
{
    int T, n, i, ara[24];

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }

        if(check(ara, n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;

}

int check(int ara[], int n)
{
    int i;

    for(i = 1; i < n; i++)
    {
        if(ara[i] < ara[i-1])
        {
            return 0;
        }
    }

    return 1;

}
