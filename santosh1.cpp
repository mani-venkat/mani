#include<iostream>
using namespace std;
int func(int n, int m){
	int sum=0,i=0;
	while(i<m){
		i+=n;
		if(i<m){
			sum+=i;
		}
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	cout<<func(n,m);
}
