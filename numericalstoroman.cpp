#include<iostream>
using namespace std;
int main(){
	int n,c=0,r=0,a=0,x=1,z;
	cout<<"Enter the number to be converted : "<<endl;
	cin>>n;
	while(n>0){
		a=n;
		while(n!=0){
			r=n%10;
			n=n/10;
			c++;
		}
		z=r;
		if(c==4){
			while(r!=0){
				cout<<"M";
				r--;
			}
		}
		if(c==3){
			if(r<4){
				while(r!=0){
					cout<<"C";
					r--;
				}
			}
			else if(r<6){
				if(r==4)
				cout<<"CD";
				else if(r==5)
				cout<<"D";
			}
			else if(r<9){
				cout<<"D";
				while(r!=5){
					cout<<"C";
					r--;
				}
			}
			else{
				if(r==9)
				cout<<"CM";
			}
		}
		if(c==2){
			if(r<4){
				while(r!=0){
					cout<<"X";
					r--;
				}
			}
			else if(r<6){
				if(r==4)
				cout<<"XL";
				else if(r==5)
				cout<<"L";
			}
			else if(r<9){
				cout<<"L";
				while(r!=5){
					cout<<"X";
					r--;
				}
			}
			else{
				if(r==9)
				cout<<"XC";
			}
		}
		if(c==1){
			if(r<4){
				while(r!=0){
					cout<<"I";
					r--;
				}
			}
			else if(r<6){
				if(r==4)
				cout<<"IV";
				else if(r==5)
				cout<<"V";
			}
			else if(r<9){
				cout<<"V";
				while(r!=5){
					cout<<"I";
					r--;
				}
			}
			else{
				if(r==9)
				cout<<"IX";
			}
		}
		if(c==4){
			n=a-z*1000;
		}
		else if(c==3){
			n=a-z*100;
		}
		else if(c==2){
			n=a-z*10;
		}
		else if(c==1){
			n=a-z*1;
		}
		c=0;
		cout<<" ";
	}
}
