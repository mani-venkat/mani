#include<stdio.h>
int main(){
	int a,b,c;
	char ch[2];
	scanf("%d",&a);
	printf(":");
	scanf("%d",&b);
	printf(":");
	scanf("%d ",&c);
	for(int i=0;i<2;i++){
		scanf("%c",&ch[i]);
	}
	if(ch[0]=='a'||ch[0]=='A'){
		printf("%d",a);
		printf(":");
		printf("%d",b);
		printf(":");
		printf("%d ",c);
		for(int i=0;i<2;i++){
			printf("%c",ch[i]);
		}
	}
	else{
		a=a+12;
		printf("%d",a);
		printf(":");
		printf("%d",b);
		printf(":");
		printf("%d ",c);
		for(int i=0;i<2;i++){
			printf("%c",ch[i]);
		}
	}
}
