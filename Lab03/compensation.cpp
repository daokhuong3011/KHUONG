#include<iostream>
#include<math.h>
using namespace std;
class employee
{
	public:
		int ID;
		int sen;
		float money;
		void nhap();
		void xuat();
		
};
void employee::nhap()
{
	cout<<"Nhap ID va Seniority ";
	cin>>ID;cin>>sen;
}
void employee::xuat()
{
	cout<<"ID: "<<ID<<endl;
	cout<<"Senoirity: "<<sen<<endl;
	cout<<"compensation: "<<money;
}

int main()
{
	employee n1,n2,n3;
	n1.nhap();
	n1.money=3000*pow(1.055,n1.sen);
	n1.xuat();
	n2.nhap();
	n2.money=3000*pow(1.055,n2.sen);
	n2.xuat();
	n3.nhap();
	n3.money=3000*pow(1.055,n3.sen);
	n3.xuat();
}
