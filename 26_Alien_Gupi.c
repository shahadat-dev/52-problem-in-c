#include<stdio.h>

int day_count(double n);

int main()
{
    int T;
    double X;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%lf", &X);

        printf("%d days\n", day_count(X));
    }

    return 0;
}

int day_count(double n)
{
    int day = 0;

    while(n >= 1.0)
    {
        n /= 2;
        day++;
    }

    return day;
}
