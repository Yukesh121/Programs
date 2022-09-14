#include <bits/stdc++.h>
using namespace std;
void printSet(set<int> my_set)
{
	cout << "Set: ";
	for (auto i : my_set)
		cout << i << " ";

	cout << '\n';
}
int findMax(set<int> my_set)
{
	int max_element;
	if (!my_set.empty())
		max_element = *(my_set.rbegin());
	return max_element;
}
int findMin(set<int> my_set)
{
	int min_element;
	if (!my_set.empty())
		min_element = *my_set.begin();
	return min_element;
}

int main()
{
	set<int> my_set;
	my_set.insert(1);
	my_set.insert(6);
	my_set.insert(15);
	my_set.insert(10);
	my_set.insert(5);
	printSet(my_set);
	cout << "Minimum element: "
		<< findMin(my_set)
		<< endl;
	cout << "Maximum element: "
		<< findMax(my_set)
		<< endl;
	cout<<"Sum of two elements:"<<findMin(my_set)+findMax(my_set);
	cout<<"\ndifference of two elements:"<<findMax(my_set)-findMin(my_set);
}
