#include<stdio.h>

int main()
{
    int T, n1, n2, n3, temp, kase;

    scanf("%d", &T);
    for(kase=1; kase<=T; kase++){

        scanf("%d %d %d", &n1, &n2, &n3);

        if(n1>n2){
            temp = n1;
            n1 = n2;
            n2 = temp;
        }

        if(n2>n3){
            temp = n2;
            n2 = n3;
            n3 = temp;
        }

        if(n1>n2){
            temp = n1;
            n1 = n2;
            n2 = temp;
        }

        printf("Case %d: %d %d %d\n",kase, n1, n2, n3);
    }

    return 0;
}
