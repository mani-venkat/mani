#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int c,count=0,n;
	cin>>n;
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
	cout<<count;
}
