#include<iostream>
using namespace std;

int main()
{
	int i;
	for (i=1; i<=10; i++)
	{
		cout << i <<'\n';
	}
//  "j" can be introduced inside the parantheses"()"
	for (int j=1; j<=10; j++)
	{
		cout << j << '\n';
	}
//  OR
	int k=1;
	for ( ; k<=10 ; )
	{
		cout << k << '\n';
		k++;
	}
	return 0;
}

