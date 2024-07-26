#pragma once
#include<iostream>
using namespace std;
void ReadStudents(int Num, float* ptr) {
	for (int i = 0; i < Num; i++)
	{
		cout << "Student " << i + 1 << ": ";
		cin >> *(ptr + i);
	}
}
void PrintStudents(int Num, float* ptr) {
	for (int i = 0; i < Num; i++)
	{
		cout << "Student " << 1 + i << ": " << *(ptr + i)<<endl;
	}
}
void DynamicArrays() {
	int Num;
	cout << "Enter Number Of Student: ";
	cin >> Num;

	float* ptr;
	ptr = new float[Num];
	ReadStudents(Num, ptr);
	cout << "================================" << endl;
	PrintStudents(Num, ptr);

	delete[] ptr;

}

