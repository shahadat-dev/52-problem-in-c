#include<stdio.h>

int ara[27];

void init();

int main()
{
    int T, i;
    char S[101];

    init();

    scanf("%d", &T);
    while(T--)
    {
        scanf(" %[^\n]", S);

        for(i = 0; S[i] != '\0'; i++)
        {
            printf("%d", ara[S[i]]);
        }
        printf("\n");

    }

    return 0;
}

void init()
{
    int i, j;

    for(i = 65, j = 1; i <= 90; i++, j++)
    {
        ara[i] = j;
    }
}
