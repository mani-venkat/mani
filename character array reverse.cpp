#include<iostream>
using namespace std;
int main(){
	int l=0;
	string s;
	cout<<"Enter the character array : "<<endl;
	cin>>s;
	cout<<"The reversed character array is : "<<endl;
	int i=0;
	while(s[i]!='\0'){
		++i;
		++l;
	}
	for(int j=l-1;j>=0;j--){
		cout<<s[j];
	}
}
