#include<iostream>
using namespace std;
class sum
{
    public:
    	int a,b;
		void addition()
		{
			cout<<"enter A :";
			cin>>a;
			cout<<"enter B :";
			cin>>b;
			cout<<"Sum ="<<a+b;
		}
};
class product:public sum
{
	public:
		void multiply()
		{
			cout<<"\nProduct ="<<a*b;
		}
};
int main()
{
	product s;
    s.addition();
    s.multiply();
}