#include<iostream>
using namespace std;
int main(){
	int a=6,b=22;
	int n,i=0;
	cin>>n;
	while(i<n){
		for(int j=0;j<=i;j++){
			if(a<10){
				cout<<"0000"<<a;
			}
			else if(a<100){
				cout<<"000"<<a;
			}
			else if(a<1000){
				cout<<"00"<<a;
			}
			else if(a<10000){
				cout<<"0"<<a;
			}
			else{
				cout<<a;
			}
			cout<<" ";
			a+=b;
			b=b+16;
		}
		cout<<"\n";
		i++;
	}
}
