#include<stdio.h>
#include<string.h>


int check_vowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int T,i,count;
    char S[1001];

    scanf("%d", &T);
    while(T--)
    {
        scanf(" %[^\n]", S);

        count = 0;

        for(i=0; i < strlen(S); i++)
        {
            if ( check_vowel(S[i]) )
            {
                count++;
            }
        }

        printf("Number of vowels = %d\n", count);
    }

    return 0;
}
