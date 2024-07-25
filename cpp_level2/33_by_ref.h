#pragma once
#include <iostream>
#include <vector>
using namespace std;
void Test1(int x) {
	x++;
}
void Test2(int& x) {
	x++;
}
void ByRef() {
	int x = 10;
	int& y = x;

	cout << &x << endl;
	cout << &y << endl;
	cout << "===============================" << endl;
	cout << x << endl;
	cout << y << endl;
	cout << "======= y = 20 ================" << endl;
	x = 20;
	cout << x << endl;
	cout << y << endl;
	cout << "=======  Test1(int x) =========" << endl;
	Test1(y);
	cout << x << endl;
	cout << y << endl;
	cout << "=======  Test2(int& x) ========" << endl;
	Test2(y);
	cout << x << endl;
	cout << y << endl;




}