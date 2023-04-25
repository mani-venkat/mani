#include<iostream>
using namespace std;
int main(){
	int n,i=0;
	cout<<"Enter the number of class intervals     : ";
	cin>>n;cout<<endl;
	float a[n],b[n],c[n],f=0;
	for(int i=0;i<n;i++){
		cout<<"Enter the "<<i<<"th lower boundary   : ";
		cin>>a[i];
		cout<<endl;
		cout<<"Enter the "<<i<<"th upper boundary   : ";
		cin>>b[i];
		cout<<endl;
		cout<<"Enter the "<<i<<"th frequency        : ";
		cin>>c[i];
		f+=c[i];
		cout<<endl;
	}
	float h=b[1]-a[1], cf=0,m=f/4,s=0;
	while(s<m){
		s+=c[i];
		if(s<m){
			i++;
		}
	}
	cf=s-c[i];
	float me=(a[i]+((m-cf)/c[i])*h);
	cout<<me;
}
