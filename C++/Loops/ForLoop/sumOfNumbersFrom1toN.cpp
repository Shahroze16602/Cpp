#include<iostream>
using namespace std;

int main()
{
	int i, n, sum = 0;
	cout << "Give value N" << '\n';
	cin >> n;
	for(i=1; i<=n; i++)
	{
		sum = sum + i;
	}
	cout << "Result = " << sum << '\n';
	return 0;
}

