#include<iostream>
using namespace std;
int func(int n, int m){
	int a[n],sum=0;
	a[0]=0;
	a[1]=1;
	for(int i=2;i<n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<n;i++){
		if(a[i]%m==0){
			sum+=a[i];
		}
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	cout<<func(n,m);
}
