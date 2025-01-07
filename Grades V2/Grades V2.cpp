// Grades V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int total;
	int i;
	int grade;
	int average;
	bool overall = true;

	total = 0;
	i = 1;

	while (overall = true && i <= 6) {
		cout << "Input the grade" << endl;
		cin >> grade;

		if (grade < 40) {
			bool overall = false;
			if (overall = false) {
				cout << "Student failed" << endl;
			}
		}

		total = total + grade;
		i++;
	}



	average = total / 6;

}