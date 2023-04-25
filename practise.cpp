#include<iostream>
using namespace std;
int main(){
	int n,rem,r,d;
	cin>>n;
	while(n!=0){
		rem=n%8;
		r=n/8;
		d=d*10+rem;
		n=r;
		cout<<rem;
	}
	while(d!=0){
		rem=d%10;
		cout<<rem;
		d/=10;
	}
}
