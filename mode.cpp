#include<iostream>
using namespace std;
int main(){
	int n,i=0,x=0,y=0;
	cout<<"Enter the number of class intervals     : ";
	cin>>n;cout<<endl;
	float a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the "<<i<<"th lower boundary   : ";
		cin>>a[i];
		cout<<endl;
		cout<<"Enter the "<<i<<"th upper boundary   : ";
		cin>>b[i];
		cout<<endl;
		cout<<"Enter the "<<i<<"th frequency        : ";
		cin>>c[i];
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		if(x<c[i]){
			x=c[i];
			y=i;
		}
		else{
			y=y;
		}
	}
	cout<<y;
	float h=b[1]-a[1],mo=(a[y]+((c[y]-c[y-1])/((2*c[y])-(c[y-1]+c[y+1])))*h);
	cout<<mo;
}
