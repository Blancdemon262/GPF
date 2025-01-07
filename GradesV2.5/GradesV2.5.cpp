// GradesV2.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int average;
	int grades[6]{ i };
	int total;
	int a = 1;
	total = 0;

	while (a <= 6) {
		cout << "Input the grade" << endl;
		cin >> i;
		if (i < 40) {
			cout << "Student failed" << endl;
			a = 7;
		}
		else {
			total = total + i;
			a++;
		}
	}
	average = total / 6;

	if (average >= 40) {
		cout << "Student Passed" << endl;
	}
	
}