#pragma once
#include<iostream>
using namespace std;
void PrintVector2(vector<int>& vNumbers) {
	for (const int& i : vNumbers)
	{
		cout << i << " ";
	}
	cout << endl;
}
void ChangeValueVector(vector<int>& vNumbers) {
	for (int& i : vNumbers)
	{
		i = 20;
	}
	cout << endl;
}
void Printiterator(vector<int>& vNumbers) {
	vector<int>::iterator iter;
	for (iter = vNumbers.begin(); iter != vNumbers.end(); iter++)
	{
		cout << "iter: " << *iter << " ";
	}

}
void VectorIterator() {
	vector<int> vNumbers = { 1,2,3,4,5 };
	PrintVector2(vNumbers);
	ChangeValueVector(vNumbers);
	PrintVector2(vNumbers);
	vNumbers.at(0) = 100;
	vNumbers.at(2) = 100;
	vNumbers[4] = 100;
	PrintVector2(vNumbers);
	Printiterator(vNumbers);
}

