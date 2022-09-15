#include<iostream>
using namespace std;
class student
{
	public:
		int rollno,t1,t2,total;
		void roll()
		{
			cout<<"enter the rollno :";
		    cin>>rollno;
		}
};
class test:public student
{
	public:
		void mark()
		{
			cout<<"enter mark in t1";
		    cin>>t1;
		    cout<<"Enter mark in t2";
		    cin>>t2;
		}
		
};
class result:public test
{
	public:
		void results()
		{
		    total=t1+t2;
		    cout<<"Result :"<<total;
	    }
};
int main()
{
	result r;
	r.roll();
	r.mark();
	r.results();
}