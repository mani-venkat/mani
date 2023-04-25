#include<iostream>
using namespace std;
int main(){
	int n,q;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		getline(cin,s[i]);
		cin.ignore(1,'\n');
	}
	cout<<"\n";
	cin.ignore(1,'\n');
	cin>>q;
	string str[q];
	for(int i=0;i<q;i++){
		getline(cin,str[i]);
		cin.ignore(1,'\n');
	}
	for(int i=0;i!='\0';i++){
		for(int j=0;j!='\0';j++){
			if(s[i].find(str[j])){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
