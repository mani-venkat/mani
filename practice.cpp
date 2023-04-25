#include<iostream>
using namespace std;
int main(){
	int n,a,l=0;
	cout<<"Enter the number :"<<endl;
	cin>>n;
	int k=n;
	while(k!=0){
		++a;
		k/=10;
	}
	int c[a];
	for(int i=a-1;i>=0;i--){
		c[i]=n%10;
		n=n/10;
	}	
	for(int i=0;i<a;i++){
		for(int j=i+1;j<a;j++){
			if(c[i]=c[j]){
				l++;
			}
		}
	}
	if(l==0){
		cout<<"It has no repeated digits";
	}
	else
	{
		cout<<"It has repeated digits"<<l;
	}
}
