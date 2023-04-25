#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%2!=0){
		cout<<"-1";
	}
	else{
		int t[n];
		for(int i=1;i<=n;i+2){
			if(t[i]%2==0){
				cout<<t[i-1];
			}
			else{
				continue;
			}
		}
	}
}
