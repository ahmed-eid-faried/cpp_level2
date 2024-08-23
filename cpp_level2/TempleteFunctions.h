#pragma once
#include <iostream>
using namespace std;
template <typename T> T MyMax(T Num1, T Num2) {
	return Num1 > Num2 ? Num1 : Num2;
}
template <typename T>T MyMin(T Num1, T Num2) {
	return Num1 < Num2 ? Num1 : Num2;
}
void TempleteFunctions() {
	cout << "MY MAX: " << endl;
	cout << MyMax<int>(3, 7) << endl;
	cout << MyMax<float>(9.5, 7.5) << endl;
	cout << MyMax<char>('a', 'f') << endl;
	cout << "MY Min: " << endl;
	cout << MyMin<int>(3, 7) << endl;
	cout << MyMin<float>(9.5, 7.5) << endl;
	cout << MyMin<char>('a', 'f') << endl;
}