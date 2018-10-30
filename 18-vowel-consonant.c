#include<stdio.h>
#include<string.h>


int check(char ch)
{
    if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }

    return 0;

}

/*void print(char S[], int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        printf("%c", S[i]);
    }
    printf("\n");
}*/

int main()
{
    int T, i, j, k;
    char S[10001], vowel[10001], cons[10001];

    scanf("%d", &T);
    while(T--)
    {
        scanf(" %[^\n]", S);

        for(i = 0, j = 0, k = 0; S[i] != '\0' ; i++)
        {
            if ( check(S[i]) == 1 )
            {
                vowel[j++] = S[i];
            }

            if ( check(S[i]) == 2 )
            {
                cons[k++] = S[i];
            }
        }

        vowel[j] = '\0';
        cons[k] = '\0';

        //print(vowel, j);
        //print(cons, k);

        printf("%s\n", vowel);
        printf("%s\n", cons);
    }

    return 0;
}
