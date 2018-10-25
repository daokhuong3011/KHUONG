#include<iostream>
#include<stdio.h>
using namespace std;
struct sodt
{
	int arena;
	int exchange;
	int number;
};
int main()
{
	struct sodt s1,s2;
	s1.arena=212;
	s1.exchange=767;
	s1.number=8900;
	cout<<"nhap so dien thoai: "<<endl;
	cin>>s2.arena;
	cin>>s2.exchange;
	cin>>s2.number;
	cout<<"My number is: ";
	cout<<"("<<s1.arena<<") "<<s1.exchange<<"-"<<s1.number<<endl;
	cout<<"Your number is: ";
	cout<<"("<<s2.arena<<") "<<s2.exchange<<"-"<<s2.number;
}
