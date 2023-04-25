#include<stdio.h>
int main(){
	int a[2][3][4],s[3][4],i,j;
	for(int k=0;k<2;k++){
		for(i=0;i<3;i++){
			for(j=0;j<4;j++){
				scanf("%d",&a[k][i][j]);
			}
		}
	}		
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			s[i][j]=a[0][i][j]+a[1][i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
