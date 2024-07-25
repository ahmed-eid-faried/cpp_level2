#pragma once
#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector <int>& Numbers) {
	for (int& Number : Numbers)
	{
		printf("%0*d ", 2, Number);
		cout << " ";
	}
	cout << "\n======================================" << endl;
}
void RemoveVector(vector <int>& Numbers, string title, int NumberOfRemove) {
	cout << "===============" << title << "============== = " << endl;
	PrintVector(Numbers);
	for (int i = 0; i < NumberOfRemove; i++)
	{
		if (!Numbers.empty())Numbers.pop_back();
		cout << "After remove " << i +1<< " items" << endl;
		PrintVector(Numbers);
		cout << "======================================" << endl;
		cout << "size  ===>>> " << Numbers.size() << endl;
		cout << "IsEmpty  ===>>> " << Numbers.empty() << endl;
		cout << "======================================" << endl;
		if (Numbers.size() == 0)break;
	}
}

void RemoveVectors() {
	vector <int> Numbers1 = { 1,2,3,4,5,6,7,8,9,10 };
	vector <int> Numbers2 = { 1,2,3,4,5,6,7,8,9,10 };
	vector <int> Numbers3 = { 1,2,3,4,5,6,7,8,9,10 };

	RemoveVector(Numbers1, "Numbers1", 3);
	cout << "#####################################################" << endl;
	RemoveVector(Numbers2, "Numbers2", 12);
	cout << "#######################before Clear#######################" << endl;
	PrintVector(Numbers3);
	Numbers3.clear();
	cout << "#######################After Clear#######################" << endl;
	PrintVector(Numbers3);

}