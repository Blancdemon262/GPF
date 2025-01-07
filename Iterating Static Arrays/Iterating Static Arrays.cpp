#include <iostream>
using namespace std;
int main()
{
	// Write a program that displays the contents of an array of integers, storing people’s ages, forwards and in reverse

	int ages[] { 10, 30, 13, 45, 52, 71, 94, 102, 46, 87 };

	/* for (int i = 0; i < 10; i++) {
		cout << "Person " << i << " is " << ages[i] << endl;
		} */

	for (int i = 9; i >= 0; i--) {
		cout << "Person " << i << " is " << ages[i] << endl;
	}

}
