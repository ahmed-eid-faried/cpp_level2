#pragma once
#include <iostream>
#include <vector>
using namespace std;
void swap(int *num1,int  *num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void SwapByPointer() {
	int a = 1, b = 2;
	cout << "Before swapping by Pointer" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap(a, b);
	cout << "\nAfter swapping by Pointer" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;  
}