#pragma once
#include <iostream>
#include <vector>
using namespace std;
void PrintAddressOfPoniterArray(int* p) {
	for (int i = 0; i < 5; i++)
	{
		cout << p + i << endl;

	}
}
void PrintValueOfPoniterArray(int* p) {
	for (int i = 0; i < 5; i++)
	{
		cout << *(p + i) << endl;

	}
}
void PoniterArray() {
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;

	PrintAddressOfPoniterArray(p);

	cout << "===================" << endl;
	PrintValueOfPoniterArray(p);

	 
}