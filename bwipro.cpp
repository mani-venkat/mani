#include<iostream>
using namespace std;
int main(){
	string s;
	char a;
	cin>>s;
	cin>>a;
	int n=0;
	while(s[n]!='\0'){
		n++;
	}
	for(int i=0;i<n;i++){
		if(int(s[i])==int(a)){
			continue;
		}
		else{
			cout<<s[i];
		}
	}
}
