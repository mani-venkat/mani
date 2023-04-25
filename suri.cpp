#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;++i){
		printf("kya karange");
		break;
	}
	
printf("\nclick 1 continue other to stop:");
scanf("%d",&n);
if(n==1){
	printf("yes\n");
}
else
printf("no\n");
}
