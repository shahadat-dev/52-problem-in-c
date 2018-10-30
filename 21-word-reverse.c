#include<stdio.h>
#include<string.h>

char rev_str[1001];

void reverse_str(char str[]);

int main()
{
    int T;
    char S[1001];

    scanf("%d", &T);
    while(T--)
    {
        scanf(" %[^\n]", S);
        reverse_str(S);
        printf("%s\n", rev_str);
    }

    return 0;
}



void reverse_str(char str[])
{
    int i, j;

    for(i = 0, j = strlen(str) - 1; j >= 0; i++, j--)
    {
        rev_str[i] = str[j];
    }

    rev_str[i] = '\0';

    return 0;

}

