#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << "Give value User!" << '\n';
	cin >> a;
	if (a>0)
	{
		cout << "Given value is positive" << '\n';
	}
	else if (a<0)
	{
		cout << "Given value is negative" << '\n';
	}
	else
	{
		cout << "Given value is zero" << '\n';
	}
	return 0;
}

