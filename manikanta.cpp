#include<iostream>
using namespace std;
int main(){
	int n,x=0,y,z=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(x<a[i]){
			x=a[i];
		}
		else{
			x=x;
		}
	}
	y=x;
	for(int i=0;i<n;i++){
		if(y>a[i]){
			y=a[i];
		}
		else{
			y=y;
		}
	}
	for(int i=1;i<=y;i++){
		if(x%i==0 && y%i==0){
			z=i;
		}
	}
	cout<<z;
}
