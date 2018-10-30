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
    int i, j, k;

    for(i = 0; i < n - 1; i++)
    {
        // check left side of array from i
        for(j = 0; j <= i; j++)
        {
            if (ara[i] < ara[j])
            {
                return 0;
            }
        }

        // check right side of array from i
        for( k = i+1; k < n; k++ )
        {
            if(ara[i] > ara[k])
            {
                return 0;
            }
        }

    }

    return 1;

}
