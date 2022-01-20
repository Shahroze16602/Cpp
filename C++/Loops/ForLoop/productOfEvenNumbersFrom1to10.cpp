#include<iostream>
using namespace std;

int main()
{
	int i, pro = 1;
	for(i=2; i<=10; i++)
	{
		if(i%2==0)
		{
			pro = pro * i;
		}
	}
	cout << "Result = " << pro << '\n';
	return 0;
}

