#include<stdio.h>
#include<math.h>

#define size 100000

char ara[size];

void seive();
int count_prime(int a, int b);

int main()
{
    int i, T, a, b;

    seive();

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d", &a, &b);

        printf("%d\n", count_prime(a, b));
    }

    return 0;
}

void seive()
{
    int i, j, root, count;

    // fill 1
    for(i = 2; i <= size; i++)
    {
        ara[i] = 1;
    }

    root = sqrt(size);

    // replace with zero which aren't prime number
    for(i = 2; i <= root; i++)
    {
        if(ara[i] == 1)
        {
            for( j = 2; i * j <= size; j++)
            {
                ara[i*j] = 0;
            }
        }

    }
}


int count_prime(int a, int b)
{
    int count = 0, i;

    for( i = (a < 2) ? 2 : a; i <= b; i++ )
    {
        if(ara[i] == 1)
        {
            count++;
        }
    }

    return count;
}


