#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int PhoneNum[10];

	cout << "Enter your Phone Number: " << endl;

	cin >> PhoneNum[0] >> PhoneNum[1] >> PhoneNum[2] >> PhoneNum[3] >> PhoneNum[4] >> PhoneNum[5] >> PhoneNum[6] >> PhoneNum[7] >> PhoneNum[8] >> PhoneNum[9];

	sort(PhoneNum, PhoneNum + 10);

	cout << "Sorted Phone Number: ";
	for (int i = 0; i < 10; i++) {
		cout << PhoneNum[i];
	}
	cout << endl << endl;

	string names[20];

	cout << "Enter some names: " << endl;

	cin >> names[0] >> names[1] >> names[2] >> names[3] >> names[4] >> names[5] >> names[6] >> names[7] >> names[8] >> names[9] >> names[10] >> names[11] >> names[12] >> names[13] >> names[14] >> names[15] >> names[16] >> names[17] >> names[18] >> names[19];

	random_shuffle(names, names + 20);

	cout << endl;
	cout << "Randomized Names: ";
	for (int i = 0; i < 20; i++) {
		cout << names[i] << endl;
	}

}
