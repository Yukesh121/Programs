#include<iostream>
#include<String>
using namespace std;
class studentreport
{
	int r,m1,m2,m3,t,a;
	char n[50];
	public:
		void getdata();
		void display();
		void calculate();
};
void studentreport::getdata()
{
	cout<<"Enter reg no :";
	cin>>r;
	cout<<"enter name :";
	cin>>n;
	cout<<"enter m1 :";
	cin>>m1;
	cout<<"enter m2 :";
	cin>>m2;
	cout<<"enter m3 :";
	cin>>m3;
	
}
void studentreport::calculate()
{
	t=m1+m2+m3;
	a=t/3;
	if(a>90)
	{
		cout<<"S grade";
	}
	else if(a>80 && a<90)
	{
		cout<<"A grade";
	}
	else if(a>70 && a<80)
	{
		cout<<"B grade";
	}
	else if(a>60 && a<70)
	{
		cout<<"C grade";
	}
	else
	{
		cout<<"No grade";
	}
}
void studentreport::display()
{
	cout<<"\n\nStudent Report :\n\n";
	cout<<"Name :"<<n;
	cout<<"\nRegister no :"<<r;
	cout<<"\nAverage :"<<a;
	cout<<"\nTotal"<<t;
}
int main()
{
	studentreport s;
	s.getdata();
	s.calculate();
	s.display();
}