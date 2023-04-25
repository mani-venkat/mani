#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int a[26]={0},i=0,l;
	while(s[i]!='\0'){
		i++;
	}
	for(int n=0;n<i;n++){
		l=int(s[n])-97;
		a[l]+=1;
	}
	int h=0;
	for(int n=0;n<26;n++){
		if(h<a[n]){
			l=n;
		}
	}
	char c=char(l+97);
	cout<<c;
	
}
