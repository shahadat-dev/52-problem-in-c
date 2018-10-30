#include<stdio.h>

int gcd(int a, int b);

int main()
{
    int T, i, a, b, gc, lcm;

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d", &a, &b);

        if(a > b){
            gc = gcd(a, b);
        }
        else{
            gc = gcd(b, a);
        }

        lcm = (a * b) / gc;

        printf("LCM = %d\n", lcm);

    }

    return 0;
}

int gcd(int a, int b)
{
    int temp;

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

