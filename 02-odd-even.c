#include<stdio.h>
#include<string.h>

int main(){

	int T, len, last_digit;
	char n[101];

	scanf("%d", &T);
	while(T--){
        scanf("%s", n);
        len = strlen(n);
        last_digit = n[len-1]-48;

        if(last_digit % 2 == 0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
	}

	return 0;
}
