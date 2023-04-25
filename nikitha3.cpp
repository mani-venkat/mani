#include<iostream>
using namespace std;
int main(){
	string s,s1;
	cin>>s;
	cin>>s1;
	int i=0,j=0,temp,b,c;
	while(s1[i]!='\0'){
		if(s1[i]=='R'){
			j++;
			i++;
		}
		else if(s1[i]=='L'){
			j--;
			i++;
		}
		else if(s1[i]=='T'){
			if(int(s[j])<57){
				c=int(s[j])+1;
				s[j]=char(c);
				i++;
			}
			else if(int(s[j])==57){
				i++;
			}
		}
		else if(s1[i]=='D'){
			if(int(s[j])>48){
				c=int(s[j])-1;
				s[j]=char(c);
				i++;
			}
			else if(int(s[j])==48){
				i++;
			}
		}
		else if(s1[i]=='S'){
			i++;
			b=int(s1[i])-48;
			temp=s[b-1];
			s[b-1]=s[j];
			s[j]=temp;
			i++;
			continue;
		}
	}
	i=0;
	while(s[i]!='\0'){
		cout<<s[i];
		i++;
	}
}
