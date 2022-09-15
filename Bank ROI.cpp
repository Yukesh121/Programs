#include<iostream>
using namespace std;
class bank
{
	public:
		int a=100000;
		void principal()
		{
		    cout<<"Principal Amount :"<<a;
		}
		
};
class AXIS:public bank
{
	public:
		void i1()
		{
			cout<<"\nInterest amount for Axis bank :"<<a*0.08;
		}
};
class ICICI:public bank
{
	public:
		void i2()
		{
			cout<<"\nInterest amount for Icici bank :"<<a*0.07;
		}
};
class SBI:public bank
{
	public:
		void i3()
		{
			cout<<"\nInterest amount for Sbi bank :"<<a*0.06;
		}
};
int main()
{
	bank b;
	b.principal();
	AXIS a;
	a.i1();
	ICICI i;
	i.i2();
	SBI s;
	s.i3();
}