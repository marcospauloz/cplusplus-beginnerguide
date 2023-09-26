#include <iostream>

using std::cout;
using std::cin;

int main() 
{
	cout << "Hello" << '\t';
	cout << "from C++" << '\n';
	int a = 2;
	int b = 2;

	int result = a + b;

	cout << a << " + " << b << '\t' << result << '\n';
	
	int times = result * a;

	cout << result << " * " << a << '\t' << times << '\n';

	cout << "Enter a number: ";
	int i = 0;
	cin >> i;
	cout << '\n' << i << '\n';
}
