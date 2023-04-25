#include<iostream>
using namespace std;
void func(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i+j==n){
				if(i+j==2*(i^j)){
					cout<<i<<" "<<j<<endl;
					count++;
				}
			}
		}
	}
	if(count==0){
		cout<<"-1 -1"<<endl;
	}
}
int main(){
	int n,k;
	cin>>k;
	while(k!=0){
		cin>>n;
		func(n);
		k--;
	}
}
