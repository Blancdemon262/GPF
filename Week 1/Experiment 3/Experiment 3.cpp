#include <iostream>

using namespace std;

int main()
{
	int value1;
	cout << "Enter the temperature in fahrenheit";
	cin >> value1;

	int result = (value1 - 32) * 5 / 9;

	cout << "The temperature is " << result << endl;

	return 0;
}