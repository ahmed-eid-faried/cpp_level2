#pragma once
#include<iostream>
using namespace std;
void DynamicMemoryAllocation() {
	int* ptrX;
	float* ptrY;
	bool* ptrZ;
	ptrX = new int;
	ptrY = new float;
	ptrZ = new bool;

	*ptrX = 444;
	*ptrY = 3.3;
	*ptrZ = true;

	cout << *ptrX << endl;
	cout << *ptrY << endl;
	cout << *ptrZ << endl;

	delete ptrX;
	delete ptrY;
	delete ptrZ;	 

}

