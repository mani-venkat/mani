#include<iostream>
using namespace std;
int main(){
	int n,l=0,m=0,aa=0,c=0,d=0,e=0;
	cout<<"Enter the number of elements of array : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements : "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==0){
			e++;
			
		}
		else if(a[i]>1){
			d++;
			m+=a[i];
		}
		else if(a[i]<0){
			c++;
			l-=a[i];
		}
	}
	if(c%2==0){
		aa+=l+m+e-c-d;
	}
	else{
		if(e>0){
			aa+=l+m+e-c-d;
		}
		else if(e==0)
		{
			aa+=l+m+2-c-d;
		}
	}
	cout<<"The minimum number of iterations are : "<<aa<<endl;
}
