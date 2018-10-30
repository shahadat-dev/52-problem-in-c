#include<stdio.h>
#include<math.h>

int main()
{
    int T, N;
    double s_root;

    scanf("%d", &T);

    while(T--){

        scanf("%d", &N);
        s_root = sqrt(N);

        if(ceil(s_root) == floor(s_root)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }

    return 0;
}
