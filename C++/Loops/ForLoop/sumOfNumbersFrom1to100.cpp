#include<iostream>
using namespace std;

int main()
{
	int i, sum = 0;
	for(i=1; i<=100; i++)
	{
		sum = sum + i;
	}
	cout << "Result = " << sum << '\n';
	return 0;
}

