#include<stdio.h>

int armstrong_check(int n);

int main()
{
    int T, n;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);

        int temp;

        if( armstrong_check(n) == n )
        {
            printf("%d is an armstrong number!\n", n);
        }
        else
        {
            printf("%d is not an armstrong number!\n", n);
        }
    }

    return 0;
}

int armstrong_check(int n)
{
    int rem, new_number = 0;

    while(n != 0)
    {
        rem = n % 10;
        new_number += rem * rem * rem;
        n /= 10;
        //printf("%d %d %d\n", n, rem, new_number);
    }

    return new_number;
}
