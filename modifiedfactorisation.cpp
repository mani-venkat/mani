#include<iostream>
#include<cmath>
using namespace std;
void prime(int n){
	while(n%2==0){
		n=n/2;
		cout<<2<<"*";
	}
	for(int i=3;i<sqrt(n);i++){
		while(n%i==0){
			n=n/i;
			cout<<i<<"*";
		}
	}
	if(n>=2){
		cout<<n;
	}
}
int main(){
	int n;
	cout<<"Enter the number to be factorised :";
	cin>>n;
	cout<<"The number as the product of prime number factors is :"<<endl;
	prime(n);
}
