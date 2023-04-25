#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string x,y;
	cin>>x;
	cin>>y;
	int in=-1,i=0;
	while(x[i]!='\0'){
		int pos=0;
		in=x.find(y,pos);
		if(in>=0){
			cout<<"yes";
			break;
		}
	}
	if(in==-1){
		cout<<"no";
	}
	
}
