#include <iostream>
using namespace std;
#include <string>

struct phanso
{
	int tu1;
	int mau1;	
	int tu2;
	int mau2;
	char toantu;
};
typedef struct phanso phanso;

void input(phanso &ps)
{
	cout<<"\nNhap vao tu mau 1, toan tu và tu mau 2: ";
	cin>>ps.tu1>>ps.mau1>>ps.toantu>>ps.tu2>>ps.mau2;
	
}

double add(phanso ps)
{
	cout<<"\nKet qua: "<<((ps.tu1*ps.mau2 + ps.mau1*ps.tu2))<<"/"<<ps.mau1*ps.mau2;
}
double sub(phanso ps)
{
	cout<<"\nKet qua: "<<((ps.tu1*ps.mau2 - ps.mau1*ps.tu2))<<"/"<<ps.mau1*ps.mau2;
}
double mul(phanso ps)
{
	cout<<"\nKet qua: "<<ps.tu1*ps.tu2<<"/"<<ps.mau2*ps.mau1;
}
double div (phanso ps)
{
	cout<<"\nKet qua: "<<ps.tu1*ps.mau2<<"/"<<ps.mau1*ps.tu2;
}
int main()
{
	char is;
	struct phanso ps1;
	
	do{
		input(ps1);
		switch(ps1.toantu)
		{
			case '+':
				{
					cout<<add(ps1)<<endl;
					break;
				}
			case '-':
				{
					cout<<sub(ps1)<<endl;
					break;
				}
			case '*':
			{
				cout<<mul(ps1)<<endl;
				break;	
			}
			case '/':
			{
				cout<<div(ps1)<<endl;
				break;	
			}
		}
		cout<<"\nDo another? (y/n) ";
		cin>>is;
		if (is=='n')
		{
			return 0;
		}
		
	}while (ps1.toantu!='+','-','*','/');
	
	
	return 0;
}


