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
    int i, is_word_started = 0, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' || str[i] == ';' || str[i] == ',' ||
           str[i] == '?' || str[i] == '!' || str[i] == '.')
        {
            is_word_started = 0;
        }
        else
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;
                count++;
            }
        }
    }

    return count;

}

