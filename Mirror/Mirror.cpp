// Mirror.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int mirror[10]{ 1,2,3,4,5 };

	for (int a = 0; a < 5; a++) {
		cout << mirror[a] << endl;
	}
	for (int i = 4; i >= 0; i--) {
		cout << mirror[i] << endl;
	}
}