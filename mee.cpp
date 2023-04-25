#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	const int n=80;
	int k;
	char a[50],b[60];
	cout<<"enter a :	"<<endl;
	cin.get(a,50);
	cin.ignore();
	cout<<"enter b :	"<<endl;
	cin.get(b,60);
	for(k=0;k<strlen(b);k++)
	{
		a[strlen(a)+k]=b[k];
	}
	a[k+strlen(a)+1]='\0';
	cout<<a;
}
