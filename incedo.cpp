#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,temp;
	cout<<a<<endl<<b<<endl;
	for(int i=0;i<6;i++){
		temp=a+b;
		cout<<temp<<endl;
		a=b;
		b=temp;
	}
}
