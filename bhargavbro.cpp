#include<iostream>
using namespace std;
int main(){
	int n,temp;
	cin>>n;
	if(n%2==0){
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		int sum=a[n/2]+a[n/2-1];
		cout<<sum;
	}
}
