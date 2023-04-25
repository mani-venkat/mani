#include<iostream>
using namespace std;
int main(){
	string s;
	int a=0,b=0,i=0,c=0;
	cin>>s;
	while(s[i]!='\0'){
		if(s[i]=='B'){
			a++;
		}
		else if(s[i]=='G'){
			b++;
		}
		i++;
	}
	i=0;
	if(a>b){
		while(s[i]!='\0'){
			if(s[i]!='B'){
				c++;
			}
			i+=2;
		}
		cout<<c;
	}
	else if(b>a){
		while(s[i]!='\0'){
			if(s[i]!='G'){
				c++;
			}
			i+=2;
		}
		cout<<c;
	}
}
