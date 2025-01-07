#include <iostream>
using namespace std;
int main()
{
	int dotw;
	cout << "Enter the number of the week." << endl;
	cin >> dotw;


	if (1 == dotw) {
		cout << "It's Monday!" << endl;
	}
	else if (dotw == 2) {
		cout << "It's Tuesday!" << endl;
	}
	else if (dotw == 3) {
		cout << "It's Wednesday!" << endl;
	}
	else if (dotw == 4) {
		cout << "It's Thursday!" << endl;
	}
	else if (dotw == 5) {
		cout << "It's Friday!" << endl;
	}
	else if (dotw == 6) {
		cout << "It's Saturday!" << endl;
	}
	else if (dotw == 7) {
		cout << "It's Friday!" << endl;
	}
	else {
		cout << "Invalid." << endl;
	}
}