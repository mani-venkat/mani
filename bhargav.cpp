#include<iostream>
using namespace std;
int main(){
	int n,r=0,rem=0;
	cout<<"enter the number : "<<endl;
	cin>>n;
	while(n>0){
		rem=n%10;
		r=r*10+rem;
		n=n/10;
	}
	cout<<r;
}
