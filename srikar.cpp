#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k,temp;
	cin>>k;
	for(int i=0;i<k;i++){
		temp=a[n-1];
		for(int j=n-1;j>=0;j--){
			a[j]=a[j-1];
		}
		a[0]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
