//This is single inheritance
#include<iostream>
using namespace std;
class P
{
	int x=10;
	public:
		void getdata()
		{
			cout<<"\nX="<<x;
		}
};
class C:public P
{
	int y=5;
	public:
		void getdata1()
		{
			cout<<"Y="<<y;
		}
};
int main()
{
C c;
c.getdata1();
c.getdata();
}