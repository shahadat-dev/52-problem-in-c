#include<stdio.h>
#include<string.h>

int main()
{
    int T,i,count,len, is_started;
    char str[100000];

    scanf("%d", &T);
    while(T--){

        scanf(" %[^\n]", str);

        len = strlen(str);

        count = 0;
        is_started = 0;

        for(i=0; i<len; i++){

            if( (str[i] >= '0' && str[i] <= '9') || str[i] == '-'){
                if(is_started == 0){
                    count++;
                }
                is_started = 1;
            }
            if (str[i] == ' '){
                is_started = 0;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
