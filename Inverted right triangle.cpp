#include<iostream>
using namespace std;
int main()
{
	int x,i,j;
	cout<<"Enter the no of lines :";
	cin>>x;
	for(i=0;i<x;i++)
	{
		for(j=i;j<x;j++)
		{
			cout<<"*";
		}cout<<"\n";
	}return 0;
}
