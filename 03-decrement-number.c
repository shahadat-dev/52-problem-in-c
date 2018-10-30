#include<stdio.h>

int main(){

	int n=1000, count=0;

	while(n){
        printf("%d\t",n);
        count++;
        n--;

        if(count == 5){
            printf("\n");
            count=0;
        }

	}

	return 0;
}
