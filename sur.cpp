#include<stdio.h>
int main(){
	int I,n,fact=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for(I=n;I>=1;I--){
		fact=fact*I;
		printf("%d",I);
		if(I==1){
			break;
		}
		printf("*");
	}
	printf("=%d",fact);
	return 0;
}
