#pragma once
#include <iostream>
#include <vector>
using namespace std;

int ReadNumber(string Message = "Enter intger number: ") {
	int Num;
	cout << Message;
	cin >> Num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Wrong Input\n";
		cout << "Please, " << Message;
		cin >> Num;
	}
	return  Num;
}
void ReadNumbers(vector <int> Numbers) {
	bool IsFinshed = false;
	while (IsFinshed)
	{
		Numbers.push_back(ReadNumber());
		cout << "Are you enter any other value [0]No/[1]YES? ";
		cin >> IsFinshed;
	}
}
void PrintNumbers(vector <int> Numbers) {
	for (int& Number : Numbers)
	{
		printf("Num ==>>> %0*d ", 2, Number);
		cout << endl;
	}
}
void AddElementsToVectors() {
	vector <int> Numbers;

	PrintNumbers(Numbers);
	cout << "======================================" << endl;
	PrintNumbers(Numbers);

}