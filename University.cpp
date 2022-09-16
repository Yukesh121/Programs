#include<iostream>
using namespace std;
class university
{
	public:
		char s[100]="abc";
		int a=1000,b=5000,c=4000;
		void virtual s1();
};
class engcg:public university
{
	public:
		void s1()
		{
		    
			cout<<"\nNumber of students in engg college :"<<a;	
		}
};
class artscg:public university
{
	public:
		void s1()
		{
			cout<<"\nNumber of students in arts college :"<<b;	
		}
};
class medical:public university
{
	public:
		int s2=2000,x=2000;
		void s1()
		{
			cout<<"\nNumber of students in medical college :"<<c;	
		}
};
class health:public medical
{
	public:
		void s1()
		{
			cout<<"\nNumber of students in health dept C :"<<s2-1000;	
			cout<<"\nNumber of students in health dept D :"<<x-1000;
		}
};
class psyche:public medical
{
	public:
		void s1()
		{
			cout<<"University Name :"<<s;
			cout<<"\nNumber of students in psyche dept A :"<<s2-500;	
			cout<<"\nNumber of students in psyche dept B :"<<s2-1500;
		}
};

int main()
{
	psyche p;
	p.s1();
	health h;
	h.s1();
	medical m;
	m.s1();
	artscg a;
	a.s1();
	engcg e;
	e.s1();
	
}