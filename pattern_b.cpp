#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"enter the size	: ";
	cin>>n;
	cout<<endl;
		for(i=1;i<=n;i++){
			for(j=0;j<2*n;j++){
				if(j<n){
					if(j<n-i){
						cout<<" ";
					}
					else{
						cout<<i;
					}
				}
				else{
					n-=1;
					if(j<n+i){
						cout<<i;
					}
					n+=1;
				}
			}
			cout<<endl;
		}
		for(i=1;i<=n;i++){
			for(j=0;j<2*n;j++){
				if(j<n){
					if(j<i){
						cout<<" ";
					}
					else{
						cout<<i;
					}
				}
				else{
					j+=1;
					if(j<2*n-i){
						cout<<i;
					}
					j-=1;
				}
			}
			cout<<endl;
		}
}
