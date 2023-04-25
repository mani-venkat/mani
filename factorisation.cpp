#include<iostream>
using namespace std;
int main()
{
	int a,b[50],c=0,k=0;
	cout<<"Enter the number to be factorised: ";
	cin>>a;
	cout<<"The number as the product of prime numbers: "<<endl;
	for(int i=1;i<a/2;i++){
		if(a%i==0){
			c++;
		}
	}
	if(c<2){
		cout<<"As the given number is a prime number it can be written as "<<a;
	}
	else{
		for(int i=2;i<a/2;i++){
			for(int j=1;j<i;j++){
				if(i%j==0){
					k++;
				}
			}
			do{
				if(a%i==0){
					cout<<i<<"*";
					a=a/i;
				}
			}while(k<2&&a%i==0);
		}
		if(a>1){
			cout<<a;
		}
	}
}
