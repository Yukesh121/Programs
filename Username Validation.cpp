#include<iostream>
using namespace std;
int main()
{
	char a[100],b[100];
	cout<<"Enter the username:";
	cin>>a;
	cout<<"Enter the username again:";
	cin>>b;
	if(strcmp(a,b)==0)
	{
		cout<<"Entered username is valid";
	}
	else
	{
		cout<<"Entered username is invalid";
	}return 0;
	
}