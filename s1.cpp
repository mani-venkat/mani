#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,b1,b2,c1=0,c2=0;
	cin>>n;
	for(int i=0;i<n;i++){
		if(i%2==0){
			b1=pow(3,i);
			if(n-b1>=0){
				n-=b1;
				c1+=b1;
			}
		}
		else if(i%2!=0){
			b2=pow(4,i);
			if(n-b2>=0){
				n-=b2;
				c2+=b2;
			}
			else{
				break;
			}
		}
	}
	cout<<c1<<" "<<c2;
}
