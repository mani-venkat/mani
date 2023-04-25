#include<iostream>;
using namespace std;
char func(char *ch,int n,int b){
	for(int i=0;i<n;i++){
		if(ch[i]=='X'){
			ch[i-1]=='X';
			ch[i+1]=='X';
			ch[i+b]=='X';
			ch[i-b]=='X';
		}
	}
	return ch[n];
}
int main(){
	int a,b,a1,b1,a2,b2,d,q,l=0,j=0;
	char temp;
	cin>>a>>b;
	int c=a*b;
	char ch[c]={'0'};
	cin>>d;
	for(int i=0;i<d;i++){
		cin>>a1>>b1;
		a1++;b1++;
		q=a1*b1-1;
		ch[q]='X';
	}
	int t,p;
	cin>>t;
	cin>>a2>>b2;
	a2++;b2++;
	p=a2*b2;
	ch[p-1]='*';
	while(p%b==1){
		temp=ch[p-1];
		ch[p-1]=ch[p-2];
		ch[p-2]=temp;
		p--;
		l++;
		if(l%t==0){
			func(ch,c,b);
		}
		if(ch[p]=='X'){
			cout<<"Escape not possible";
		}
	}
}
