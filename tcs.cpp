#include<iostream>
using namespace std;
int main(){
	int n,c,x=0,y=0;
	cout<<"Enter the number of elements : "<<endl;
	cin>>n;
	int a[n],f[n];
	cout<<"Enter the array elements : "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%10==0){
			++c;
		}
	}
	int b[c],d[n-c];
	for(int i=0;i<n;i++){
		if(a[i]%10==0){
			b[x]=a[i];
			++x;
		}
		else{
			d[y]=a[i]; 
			++y;
		}
	}
	for(int i=0;i<n;i++){
		if(i<n-c){
			f[i]=d[i];
		}
		else{
			f[i]=b[i-(n-c)];
		}
	}
	for(int i=0;i<n;i++){
		cout<<f[i]<<" ";
	}	
}
