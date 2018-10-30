#include<stdio.h>

int main(){
	int T,n;
	scanf("%d", &T);
	while(T--){
		scanf("%d", &n);
		if(n%2==0){
			printf("even\n");
		} else{
			printf("odd\n");
		}
	}
	return 0;
}