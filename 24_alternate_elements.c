#include<stdio.h>

int main()
{
    int T, n, set, i, ara[100];

    scanf("%d", &T);

    for(set = 1; set <= T; set++)
    {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }

        printf("Set %d:", set);

        for(i = 0; i < n; i += 2)
        {
            printf(" %d", ara[i]);
        }
        printf("\n");

    }

    return 0;
}

