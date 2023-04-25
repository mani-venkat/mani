#include<iostream>
using namespace std;
int func(string s){
	int l=int(s[1])-int(s[0]);
	cout<<l<<endl;
	return l;
}
int fun(string s){
	int l=(int(s[2])-int(s[1]));
	cout<<l<<endl;
	return l;
}
int main(){
	int n,c,co;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	int a[n],b[n];
	for(int i=0;i<n;i++){
		a[i]=func(s[i]);
		b[i]=fun(s[i]);
	}
	c=a[0];co=b[0];
	for(int i=0;i<n;i++){
		if(c!=a[i]){
			c=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(co!=b[i]){
			co=b[i];
		}
	}
	if(c==co){
		cout<<s[c];
	}
}
