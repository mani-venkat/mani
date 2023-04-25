#include<stdio.h>
int main(){
	int n,i=2;
	scanf("%d",&n);
	while(n>1){
		if(n%i==0){
			n=n/i;
			printf("%d",i);
			if(n>1){
				printf("*");
			}
		}
		else{
			i++;
		}
	}
}
