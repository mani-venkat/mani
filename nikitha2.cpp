#include<iostream>
#include<math.h>
using namespace std;
int func(int n){
	int c,count=0;
	for(int i=2;i<=n;i++){
		c=0;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				c++;
			}
		}
		if(c==0){
			count++;
		}
	}
	return count;
}
int main(){
	int n,c=0;
	cin>>n;
	while(n>1){
		n-=func(n);
		c++;
	}
	c=c+1;
	cout<<c;
}
