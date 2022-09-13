#include<iostream>
using namespace std;
class add
{
	int x,y;
	public:
		void input();
		void display();
};
void add::input()
{
	cout<<"enter two number:";
	cin>>x>>y;
};
void add::display()
{
	cout<<"addition :"<<x+y;
}
int main()
{
	add a;
	a.input();
	a.display();
}