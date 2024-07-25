#pragma once
#include <iostream>
#include <vector>
using namespace std;

void PrintVector1(vector <int>& Numbers) {
	for (int& Number : Numbers)
	{
		printf("%0*d ", 2, Number);
		cout << " ";
	}
	cout << "\n======================================" << endl;
} 
void RemoveVectors() {
	vector <int> Numbers = { 1,2,3,4,5,6,7,8,9,10 };

	PrintVector1(Numbers);
	cout << "frist element in Numbers \t==>> " << Numbers.front() << endl;
	cout << "last element in Numbers \t==>> " << Numbers.back() << endl;
	cout << "size of Numbers \t==>> " << Numbers.size() << endl;
	cout << "capacity of Numbers \t==>> " << Numbers.capacity() << endl;
	cout << "clear of Numbers \t==>> " << endl;
	Numbers.clear();
	cout << "IsEmpty ==> Numbers \t==>> " << Numbers.empty() << endl;
	PrintVector1(Numbers);

 

}