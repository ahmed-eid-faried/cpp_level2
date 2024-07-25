#pragma once
#include <iostream>
#include <vector>
using namespace std;

int ReadNum(string Message = "Enter intger number: ") {
	int Num;
	cout << Message;
	cin >> Num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong Input\n";
		cout << "Please, " << Message;
		cin >> Num;
	}
	return  Num;
}
void ReadNumbers(vector <int>& vNumbers) {
	int IsFinshed = 1;
	while (IsFinshed == 1)
	{
		vNumbers.push_back(ReadNum("Enter intger number: "));
		cout << "Are you enter any other value [0]No/[1]YES? ";
		cin >> IsFinshed;
		if (IsFinshed == 0)break;
	}
}
void PrintNumbers(vector <int>& Numbers) {
	for (int& Number : Numbers)
	{
		printf("Num ==>>> %0*d ", 2, Number);
		cout << endl;
	}
}
void AddElementsToVectors() {
	vector <int> vNumbers;

	ReadNumbers(vNumbers);
	cout << "======================================" << endl;
	PrintNumbers(vNumbers);

}