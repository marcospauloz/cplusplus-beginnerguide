#include <iostream>

using std::cout;

#include "Functions.h"

int main()
{
	double total = add(3, 4);
	cout << "3 + 4 is " << total << '\n';

	double another = add(1.2, 1.4);
	cout << "1.2 + 1.4 is " << another << '\n';

	double totalofthree = add(1.1, 2.2, 3.3);
	cout << "1.1 + 2.2, 3.3 is " << totalofthree << '\n';

	return 0;
}
