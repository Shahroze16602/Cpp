// header file for input-output stream (cin,cout)
#include<iostream>
// namespace for cin, cout
using namespace std;
// main function required for each C++ program
int main()
{
	// Type declaration of variables
	int a, b, c;
	// output statement using stream-insertion operator <<
	cout << "Give number A" << '\n';
	// input statement using stream-extraction operator >>
	cin >> a;
	cout << "Give Number B" << '\n';
	cin >> b;
	// Assignment statement for computation
	c = a + b;
	cout << "Sum is " << c << '\n';
	// value to be returned by the main function
	return 0;
}
