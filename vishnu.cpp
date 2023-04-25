#include<iostream>
using namespace std;
void func(int n){
	int a[n],b[n]={0},x,t=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	x=a[0];
	for(int i=0;i<n;i++){
		b[i]=(a[i]^x)&a[i];
	}
	for(int i=1;i<n;i++){
		t^=b[i];
	}
	cout<<t<<endl;
}
int main(){
	int t,n;
	cin>>t;
	while(t>0){
		cin>>n;
		func(n);
		--t;
	}
}
