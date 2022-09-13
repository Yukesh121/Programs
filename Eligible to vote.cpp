#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter your age:";
	cin>>a;
	c=18-a;
	if(c==18 or a<0)
	{
		cout<<"Enter a valid input";
	}
	else
	{
		if(a>18)
	    {
		    cout<<"You are eigible to vote";
	    }
	    else
	    {
		    cout<<"You are not eligible to vote\n";
			cout<<"You are "<<c<<" years away to vote"; 
	    }
	}
	return 0;
}