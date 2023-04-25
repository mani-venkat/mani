#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
float mean(float *a,float *b,float *c,int n,float h){
	float f=0,s=0;
	float am;
	for(int i=0;i<n;i++){
		f+=c[i];
		s+=(a[i]+(h/2))*c[i];
	}
	am=s/f;
	return am;
}
float median(float *a,float *b,float *c,float f,float h){
	float cf=0,m=f/2,s=0;
	int i=0;
	while(s<m){
		s+=c[i];
		if(s<m){
			i++;
		}
	}
	cf=s-c[i];
	float me=(a[i]+((m-cf)/c[i])*h);
	return me;
}
float mode(float *a,float *b,float *c, int n,float h){
	int x=0,y=0;
	for(int i=0;i<n;i++){
		if(x<c[i]){
			x=c[i];
			y=i;
		}
		else{
			y=y;
		}
	}
	float mo=(a[y]+((c[y]-c[y-1])/((2*c[y])-(c[y-1]+c[y+1])))*h);
	return mo;
}
float quartile_1(float *a,float *b,float *c,float f,float h){
	float cf=0,m=f/4,s=0;
	int i=0;
	while(s<m){
		s+=c[i];
		if(s<m){
			i++;
		}
	}
	cf=s-c[i];
	float me=(a[i]+((m-cf)/c[i])*h);
	return me;
}
float quartile_3(float *a,float *b,float *c,float f,float h){
	float cf=0,m=(3*f)/4,s=0;
	int i=0;
	while(s<m){
		s+=c[i];
		if(s<m){
			i++;
		}
	}
	cf=s-c[i];
	float me=(a[i]+((m-cf)/c[i])*h);
	return me;
}
float quar_deviation(float q1,float q3){
	return (q3-q1)/2;
}
float coef_quar_dev(float q1,float q3){
	return ((q3-q1)/(q3+q1));
}
float mean_dev_mean(float *a,float *c,float f, int n,float h,float am){
	float sum=0,b;int i=0;
	while(i<n){
		b=a[i]+(h/2);
		if(am-b>0){
			sum+=c[i]*(am-b);
		}
		else{
			sum-=c[i]*(am-b);
		}
		i++;
	}
	return sum/f;
}
float mean_dev_median(float *a,float *c,float f, int n,float h,float me){
	float sum=0,b;
	for(int i=0;i<n;i++){
		b=a[i]+(h/2);
		if(me-b>0){
			sum+=c[i]*(me-b);
		}
		else{
			sum-=c[i]*(me-b);
		}
	}
	return sum/f;
}
float std_dev(float *a,float f,int n,float h,float am){
	float sum=0,b;
	for(int i=0;i<n;i++){
		b=a[i]+(h/2);
		sum+=(b-am)*(b-am);
	}
	return sum/f;
}
int main(){
	int n;
	float am,me,q1,q3,mo,qd,cqd,mdam,mdme,sd;
	char ch='n';
	cout<<"Enter the number of class intervals         : ";
	cin>>n;
	cout<<endl;
	while(ch!='y'){
		if(n<=0 && n<=10){
			cout<<"enter a valid number greater than 0 and less than 11 	: ";
			cin>>n;
			cout<<endl;
		}
		else{
			ch='y';
		}
	}
	cout<<endl;
	float h,a[n],b[n],c[n]={0},f=0;
	for(int i=0;i<n;i++){
		ch='n';
		if(i==0){
			cout<<"Enter the height greater than 0  : ";
			cin>>h;
			cout<<endl;
			cout<<"Enter the first element of lower boundary	: ";
			cin>>a[i];
			cout<<endl;
			b[i]=a[i]+h;
		}
		else{
			a[i]=b[i-1];
			b[i]=a[i]+h;
		}
		while(ch!='y'){
			if(c[i]<=0){
				if(i==0){
					cout<<"Enter the "<<i+1<<"st frequency	: ";
				}
				else if(i==1){
					cout<<"Enter the "<<i+1<<"nd frequency	: ";
				}
				else if(i==2){
					cout<<"Enter the "<<i+1<<"rd frequency	: ";
				}
				else{
					cout<<"Enter the "<<i+1<<"th frequency	: ";
				}
				cin>>c[i];
				cout<<endl;
				if(c[i]<0){
					cout<<"Invalid input! Re-";
				}
			}
			else{
				ch='y';
			}
		}
		f+=c[i];
		cout<<endl;
	}
	float fr=0,s=0;
	am=mean(a,b,c,n,h);
	q1=quartile_1(a,b,c,f,h);
	me=median(a,b,c,f,h);
	q3=quartile_3(a,b,c,f,h);
	mo=mode(a,b,c,n,h);
	qd=quar_deviation(q1,q3);
	cqd=coef_quar_dev(q1,q3);
	mdam=mean_dev_mean(a,c,f,n,h,am);
	mdme=mean_dev_median(a,c,f,n,h,me);
	sd=sqrt(std_dev(a,f,n,h,am));
	cout<<setw(15)<<"class interval"<<setw(12)<<"mid values"<<setw(12)<<"frequency"<<setw(25)<<"cumiliative frequency"<<endl;
	for(int i=0;i<n;i++){
		fr=h/2+a[i];
		s+=c[i];
		cout<<setw(5)<<a[i]<<setw(3)<<"    -"<<setw(5)<<b[i]<<setw(12)<<fr<<setw(12)<<c[i]<<setw(25)<<s<<endl;
		fr=0;
	}
	cout<<endl;
	cout<<"Mean of given data is                                        : "<<am<<endl;
	cout<<"1st quartile of given data is                                : "<<q1<<endl;
	cout<<"Median of given data is                                      : "<<me<<endl;
	cout<<"3rd quartile of given data is                                : "<<q3<<endl;
	cout<<"Mode of given data is                                        : "<<mo<<endl;
	cout<<"Quartile deviation of given data is                          : "<<qd<<endl;
	cout<<"Co-ef of quartile deviation of given data is                 : "<<cqd<<endl;
	cout<<"Mean deviation from mean of given data is                    : "<<mdam<<endl;
	cout<<"Mean deviation from median of given data is                  : "<<mdme<<endl;
	cout<<"Standard deviation of given data is                          : "<<sd<<endl;
}
