#include<iostream>
using namespace std;
int main(){
	int n,t,c=0,l=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				if(l<1){
					c++;
				}
			}
		}
		l=0;
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<c;
}
