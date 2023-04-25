#include<iostream>
using namespace std;
int function(int a[], int t){
	int temp=0,s=0;
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	for(int i=0;i<t-1;i++){
		for(int j=i+1;j<t;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=1;i<t;i++){
		s+=a[i]-a[i-1];
	}
	return s;
}
int main(){
	int n,t;
	cin>>n;
	int a[t],b[n]={0};
	for(int i=0;i<n;i++){
		cin>>t;
		b[i]=function(a,t);
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<endl;
	}
}
