#include<iostream>
#include<math.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i=0;
	while(s[i]!='\0'){
		i++;
	}
	i-=2;
	if(i%2==0){
		i=pow(2,i)-2;
	}
	else{
		i=pow(2,i)+2;
	}
	cout<<i;
}
