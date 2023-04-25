#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c,count=0;
	cin>>a>>b;
	int ar=a*b;
	while(ar!=0){
		c=sqrt(ar);
		ar-=c*c;
		count++;
	}
	cout<<count;
	
}
