#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Give value of A" << '\n';
	cin >> a;
	cout << "Give value of B" << '\n';
	cin >> b;
	if (a>b)
	{
		cout << "A is greater" << '\n';
	}
	else if (a<b)
	{
		cout << "B is greater" << '\n';
	}
	else
	{
		cout << "Both are equal" << '\n';
	}
	return 0;
}

