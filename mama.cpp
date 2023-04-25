#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,k,t=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	int i=0,ans=0,j=n-1;
	while(i<=j){
		ans++;
		if(a[i]==k){
			i++;
		}
		else{
			if(a[i]+a[j]<=k){
				i++;
			}
			j--;
		}
	}
	cout<<ans;
}
