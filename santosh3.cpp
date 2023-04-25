#include<iostream>
using namespace std;
int main(){
	int n,g,b,c=0;
	cin>>n;
	cin>>g;
	cin>>b;
	while(n!=0){
		if(n>g){
			n-=g;
			c+=g+b;
		}
		else{
			c+=n;
			n=0;
		}
	}
	cout<<c;
}
