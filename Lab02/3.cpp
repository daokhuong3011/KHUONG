#include<iostream>
using namespace std;
float kq(float a,char b,float c)
{
	if(b=='+')
		return a+c;
	else if(b=='-')
		return a-c;
	else if(b=='*')
		return a*c;
	else if(b=='/'&&(c!=0))
		return a/c;
}
int main()
{	
	float a,c;
	char b,d;
	do
	{
		cout<<"Enter first number,operator,second number ";
		cin>>a;
		cin>>b;
		cin>>c;
		cout<<"Answer = "<<kq(a,b,c)<<endl;
		cout<<"Do another(y/n) ? ";
		cin>>d;
		if (d=='n') 
			break;
	}while(d=='y');	
}
