#include<iostream>
using namespace std;
int main(){
	string s;
	int i=0,n;
	cin>>s;
	cin>>n;
	while(s[i]!='\0'){
		i++;
	}
	for(int j=0;j<i;j++){
		if(j%n==0&&j!=0){
			cout<<" ";
		}
		cout<<s[j];
	}
}
