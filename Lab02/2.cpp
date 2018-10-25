#include<iostream>
using namespace std;
void nhapxuat(float a,int b,float c);
float lai(float a,int b,float c);
int main()
{
	int b;
	float a,c;
	nhapxuat(a,b,c);
}
float lai(float a,int b,float c)
{
	float s=a;
	for(int i=1;i<=b;i++)
		s=s+s*(c/100);
	return s;
}
void nhapxuat(float a,int b,float c)
{
	cout<<"Enter intial amount: ";
	cin>>a;
	cout<<"\n Enter number of years: ";
	cin>>b;
	cout<<"\n Enter interest rate: ";
	cin>>c;
	cout<<"\n At the end of "<<b<<" years, you will have "<<lai(a,b,c)<<" dollars";
}
