#pragma once
#include <iostream>
#include <vector>
using namespace std;
 
void Pointers() {
	int x = 10;
	int  y = 30;
	//int* p = x;error
	int* p = &x;
	cout << "ADDRESS X ==>>  " << &x << endl;
	cout << "ADDRESS Y ==>>  " << &y << endl;
	cout << "===============================" << endl;
	cout << "VALUE X ==>>  " << x << endl;
	cout << "VALUE Y ==>>  " << y << endl;
	cout << "===============================" << endl;
	cout << "VALUE OF pointer FOR X ==>>  " << p << endl;
	cout << "ADDRESS OF pointer FOR X ==>>  " << &p << endl;
	cout << "===============================" << endl;
	p = &y;
	cout << "VALUE OF pointer FOR Y ==>>  " << p << endl;
	cout << "ADDRESS OF pointer FOR Y ==>>  " << &p << endl;
	cout << "===============================" << endl;


}