#include<iostream>
using namespace std;
int main(){
	int a[50],b=0,c=1,temp;
	a[0]=b;
	a[1]=c;
	for(int i=2;i<50;i++){
		temp=b+c;
		a[i]=temp;
		b=c;
		c=a[i];
	}
	int n;
	cin>>n;
	for(int i=0;i<50;i++){
		if(a[i]==n){
			cout<<i+1;
			break;
		}
	}
}
