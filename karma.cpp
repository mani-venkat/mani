#include<iostream>
using namespace std;
void karma(int j,int count){
	int a=6,b;
	while(j<count){
		if(j=0){
			cout<<a;
		}
		else if(j==1){
			a+=b;
			cout<<a;
		}
		else{
			b+=16;
			a+=b;
			cout<<a;
		}
		j=j+1;
	}
}
int main(){
	int k,count=1,j;
	cin>>k;
	for(int i=0;i<k;i++){
		j=0;
		karma(j,count);
		count++;
	}
}
