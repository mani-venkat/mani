#include<iostream>
using namespace std;
int main(){
	int c=0;
	string s;
	getline(cin,s);
	cout<<s;
	for(int i=0;s[i]!='\0';i++){
		if(int(s[i])==32){
			if(int(s[i-1])>47&&int(s[i-1])<58){
				c=c;
			}
			else{
				c++;
			}
		}
	}
	cout<<c;
}
