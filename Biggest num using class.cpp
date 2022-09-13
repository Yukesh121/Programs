#include<iostream>
using namespace std;
class biggest
{
	int x,y;
	public:
		void input();
		void display();
};
void biggest:: input()
{
	cout<<"enter two number:";
	cin>>x>>y;
}
void biggest::display()
{
	if(x>y)
	{
		cout<<x<<" is bigger";
	}
	else
	{
		cout<<y<<" is bigger";
	}
}
int main()
{
	biggest a;
	a.input();
	a.display();
}