#pragma once
#include <iostream>
using namespace std;
int ReadNumber(string Message) {
	int Num;
	cout << Message;
	cin >> Num;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid Number\n" << Message;
		cin >> Num;
	}
	return Num;
}
void ValidationNumber() {
	cout<<ReadNumber("Please Enter Number: ");
}