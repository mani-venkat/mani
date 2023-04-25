#include<iostream>
using namespace std;
int main(){
	int x[3],y[3],l[3],n;
	cout<<"For length method choose 1 & for point method choose 2\n";
	cin>>n;
	if(n==1){
		for(int i=0;i<3;i++){
			cout<<"Enter the "<<i<<" length";
			cin>>l[i];
		}
		if(l[0]<l[1]+l[2]){
			if(l[1]<l[0]+l[2]){
				if(l[2]<l[0]+l[1]){
					cout<<true;
				}
				else{
					cout<<false;
				}
			}
			else{
				cout<<false;
			}
		}
		else{
			cout<<false;
		}
	}
	else{
		for(int i=0;i<3;i++){
			cout<<"Enter the "<<i<<" co-ordinate";
			cin>>x[i]>>y[i];
		}
		int m1=(y[0]-y[1])/(x[0]-x[1]);
		int m2=(y[1]-y[2])/(x[1]-x[2]);
		if(m1==m2){
			cout<<false;
		}
		else{
			cout<<true;
		}
	}
}
