#include <iostream>
using std::cout;
using std::cin;

int main()
{
	/*int firstNumber;
	int secondNumber;
	cout << "Enter a number: ";
	cin >> firstNumber;
	cout << "You entered " << firstNumber << ". Enter another number: ";
	cin >> secondNumber;

	if (firstNumber < secondNumber)
	{
		cout << "The first number, " << firstNumber << ", is less than the second number, " << secondNumber << "\n";
	}
	if (firstNumber == secondNumber)
	{
		cout << "The first number, " << firstNumber << ", is equal to the second number, " << secondNumber << "\n";
	}

	if (firstNumber > secondNumber)
	{
		cout << "The first number, " << firstNumber << ", is greater than the second number, " << secondNumber << "\n";
	}*/

	int answer = 35;
	int guessedNumber = 0;;
	do
	{
		cout << "Enter a number: \n";
		cin >> guessedNumber;
		if (guessedNumber < answer) 
		{
			cout << "\nThe number you entered is lower than the answer, try another one!";
		}
		if (guessedNumber > answer)
		{
			cout << "\nThe number you entered is higher than the answer, try another one!";
		}
	} while (guessedNumber != answer);

	cout << "\nCongratulations!! You found the right number";
}