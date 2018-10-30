#include<stdio.h>
#include<string.h>

int count_word(char str[]);

int main()
{
    int T;
    char S[10001];

    scanf("%d", &T);
    while(T--)
    {
        scanf(" %[^\n]", S);
        printf("Count = %d\n", count_word(S));
    }

    return 0;
}



int count_word(char str[])
{
    int count = 0;
    char *word;

    word = strtok(str, ",!;?. ");

    while(word != NULL)
    {
        if(strlen(word) > 0)
        {
            count++;
        }
        word = strtok(NULL, ",!;?. ");
    }

    return count;

}

