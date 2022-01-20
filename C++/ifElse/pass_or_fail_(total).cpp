#include<iostream>
using namespace std;

int main()
{
	int marks_1, marks_2, marks_3;
	cout << "Give marks of first subject" << '\n';
	cin >> marks_1;
	cout << "Give marks of second subject" << '\n';
	cin >> marks_2;
	cout << "Give marks of third subject" << '\n';
	cin >> marks_3;
	int total = marks_1 + marks_2 + marks_3;
	if (total >= 150)
	{
		cout << "Pass" << '\n';
	}
	else
	{
		cout << "Fail" << '\n';
	}
	return 0;
}

