#include<iostream>
using namespace std;

int main()
{
	int a, b, c, x;
	cout << "Give value of A" <<'\n';
	cin >> a;
	cout << "Give value of B" <<'\n';
	cin >> b;
	cout << "Give value of C" <<'\n';
	cin >> c;
	//cout << "Result =" << (b*b-4*a*c)/(2*a) << '\n';
	x = (b*b-4*a*c)/(2*a);
	cout << "Result =" << x << '\n';
	return 0;
}

