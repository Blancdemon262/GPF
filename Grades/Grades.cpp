#include <iostream>
using namespace std;
int main()
{
	int grade1;
	cout << "Input grade 1" << endl;
	cin >> grade1;

	int grade2;
	cout << "Input grade 2" << endl;
	cin >> grade2;

	int grade3;
	cout << "Input grade 3" << endl;
	cin >> grade3;

	int grade4;
	cout << "Input grade 4" << endl;
	cin >> grade4;

	int grade5;
	cout << "Input grade 5" << endl;
	cin >> grade5;

	int grade6;
	cout << "Input grade 6" << endl;
	cin >> grade6;

	int average;
	average = (grade1 + grade2 + grade3 + grade4 + grade5 + grade6) / 6;

	if (average <= 29) {
		cout << "The student has achieved F!" << endl;
	}
	else if (average <= 39) {
		cout << "The student has achieved E!" << endl;
	}
	else if (average <= 49) {
		cout << "The student has achieved D!" << endl;
	}
	else if (average <= 59) {
		cout << "The student has achieved C!" << endl;
	}
	else if (average <= 69) {
		cout << "The student has achieved B!" << endl;
	}
	else if (average <= 84) {
		cout << "The student has achieved A!" << endl;
	}
	else if (average <= 100) {
		cout << "The student has achieved A*!" << endl;
	}
	else {
		cout << "Invalid, no grade awarded." << endl;
	}
	
	if (grade1 >= 40 && grade2 >= 40 && grade3 >= 40 && grade4 >= 40 && grade5 >= 40 && grade6 >=40) {
		cout << "The student has passed!" << endl;
		}
	else {
		cout << "The student has failed." << endl;
	}
}