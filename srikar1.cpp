#include<iostream>
using namespace std;
int func(int n){
	int c=0,rem=0;
	int a[10]={0};
	while(n!=0){
		rem=n%10;
		a[rem]+=1;
		n=n/10;
	}
	for(int i=0;i<10;i++){
		if(a[i]>1){
			c++;
		}
	}
	if(c==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n1,n2,count;
	cin>>n1;
	cin>>n2;
	for(int i=n1;i<=n2;i++){
		count+=func(i);
	}
	cout<<count;
}
