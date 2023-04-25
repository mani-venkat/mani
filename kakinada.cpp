#include<iostream>
using namespace std;
int main(){
	int i;
	cin>>i;
	int a[i];
	for(int n=0;n<i;n++){
		cin>>a[n];
	}
	for( int n=0;n<i;n++){
		for(int j=n;j<i;j++){
			int k=0;
			if(a[n]<a[j]){
				k=a[n];
				a[n]=a[j];
				a[j]=k;
			}
		}
	}
	int k;
	cin>>k;
	for(int n=0;n<i;n++){
		if (a[n]==k){
			cout<<n;
			break;
		}
	}
	cout<<endl;
	for(int n=i-1;n>=0;n--){
		if(a[n]==k){
			cout<<n;
			break;
		}
	}
}
