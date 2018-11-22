#include<iostream>
using namespace std;
class time
{
	public:
		int hour,minute,second;
		time();
		void nhap();
		void xuat();
};
time::time()
{
	hour=0,minute=0,second=0;
}
void time::nhap()
{
	do
	{
		cout<<"Nhap thoi gian: ";
		cin>>hour;
		cin>>minute;
		cin>>second;
	}while((hour>=12)||(minute>=60)||(second>=60));
}
void time::xuat()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
int main()
{
	time t1,t2,t3;
	int s1,s2,s3;
	cout<<"nhap thoi gian 2: ";
	t2.nhap();
	s1=t1.second+t1.minute*60+t1.hour*3600;
	s2=t2.second+t2.minute*60+t2.hour*3600;
	s3=s1+s2;
	t3.hour=s3/3600;
	if(t3.hour>=12) t3.hour=t3.hour-12;
	s3=s3%3600;
	t3.minute=s3/60;
	s3=s3%60;
	t3.second=s3;
	t3.xuat();
	return 0;
}
