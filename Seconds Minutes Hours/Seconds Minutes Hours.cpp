// Seconds Minutes Hours.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int seconds;
	cout << "Input the seconds you want converted." << endl;
	cin >> seconds;

	int hours;
	hours = seconds / 3600;

	int minutes;
	minutes = seconds / 60;

	minutes = minutes % 60;
	seconds = seconds % 60;

	cout << hours << "=" << minutes << "=" << seconds << endl;
}