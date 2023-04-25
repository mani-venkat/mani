#include<iostream>
using namespace std;
int letter(char input1){
	int a[26],p=0,q=1;
	a[0]=0;a[1]=1;
	for(int i=2;i<26;i++){
		a[i]=p+q;
		p=q;
		q=a[i];
	}
	int b=int(input1)-65;
	return a[b];
}
int main(){
	string s;
	cin>>s;
	int sum=0,i=0;
	while(s[i]!='\0'){
		sum+=letter(s[i]);
		i++;
	}
	cout<<sum;
}
