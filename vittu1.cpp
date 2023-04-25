#include<iostream>
using namespace std;
int main(){
	int k,count;
	cin>>k;
	int a[k];
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
	for(int b=0;b<k;b++){
		count=0;
		for(int i=1;i<=a[b];i++){
			for(int j=1;j<=a[b];j++){
				if(i+j==a[b]){
					if(i+j==2*(i^j)){
						cout<<i<<" "<<j<<endl;
						count++;
					}
				}
			}
		}
		if(count==0){
			cout<<"-1 -1"<<endl;
		}
	}
}
