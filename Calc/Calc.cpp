
#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char operation;
	double result;
	
	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	cout << "Enter operation (+, -, *, /): ";
	cin >> operation;


	if (operation == '+')
	{
		result = num1 + num2;
	}
	else if (operation == '-') {
		result = num1 - num2;
	}
	else if (operation == '/') {
		
		if (num2 != 0) {
			result = (double)num1 / num2;
		}
		else {
			cout << "Ошибка: деление на ноль!" << endl;
			return 1;
		}
	}
	else if (operation == '*') {
		result = num1 * num2;
	}
	else {
		cout << "Ошибка: недопустимая операция!" << endl;
		return 1;
	}

	cout << "Result: " << result << endl;

	return 0;
}

