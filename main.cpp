#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int PhoneNum[10];

	cout << "Enter your Phone Number: " << endl;

	for (int i = 0; i < 10; i++) {

		cin >> PhoneNum[i];

	}

	sort(PhoneNum, PhoneNum + 10);

	cout << "Sorted Phone Number: ";
	for (int i = 0; i < 10; i++) {
		cout << PhoneNum[i];
	}
	cout << endl << endl;

	string names[20];

	cout << "Enter some names: " << endl;

	for (int i = 0; i < 20; i++) {

		cin >> names[i];

	}

	random_shuffle(names, names + 20);

	cout << endl;
	cout << "Randomized Names: ";
	for (int i = 0; i < 20; i++) {
		cout << names[i] << endl;
	}

}
