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
	int avg = (marks_1 + marks_2 + marks_3)/3;
	if (avg >= 50)
	{
		cout << "Pass" << '\n';
	}
	else
	{
		cout << "Fail" << '\n';
	}
	return 0;
}

