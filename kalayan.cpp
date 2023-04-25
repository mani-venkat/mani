#include<iostream>
using namespace std;
int main(){
	int n,x=0;
	cin>>n;
	int a[n],b[10]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int c=a[i];
		b[c]+=1;
	}
	int t=0;
	for(int i=9;i>=0;i--){
		if(b[i]>=t){
			t=b[i];
			x=i;
		}
	}
	cout<<x;
}
