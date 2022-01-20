#include<iostream>
using namespace std;

int main()
{
	int a[10];
	cout << "Give Array Values" << '\n';
	for (int i=0; i<10; i++)
	{
		cin >> a[i];
	}
	int low = a[0];
	for (int i=1; i<10; i++)
	{
		if (a[i]<low)
		{
			low = a[i];
		}
	}
	cout << "Lowest = "<< low << '\n';
	return 0;
}

