#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter your number" << endl;
	cin >> number;

	if (number %3==0 && number %5 ==0) {
		cout << "Fizz Buzz" << endl;
	}
	else if (number % 5 == 0) {
		cout << "Buzz" << endl;
	}
	else if (number % 3 == 0) {
		cout << "Fizz" << endl;
		}
	else {
		cout << number << endl;
	}
}