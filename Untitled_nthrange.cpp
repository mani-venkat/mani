#include<iostream>
using namespace std;
int palin(int a){
		int n=a,rem,r=0;
		while(n>0){
			rem=n%10;
			r=r*10+rem;
			n=n/10;
		}
		if(r==a){
			return 1;
		}
		else{
			return 0;
		}
	
}
int main(){
	int a,b;
	cout<<"enter the number :"<<endl;
	cin>>a;
	cout<<"enter the range : "<<endl;
	cin>>b;
	while(b>0){
		b=b-palin(a);
		a++;
	}
	cout<<(a-1);
	return 0;
}
