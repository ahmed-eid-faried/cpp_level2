#pragma once
#include <iostream>
#include <vector>
using namespace std;

void Pointers() {
	int x = 10;
	int  y = 30;
	int& z = x;
	//&z = y;//wrong ===>> ref for one var (not change it) but pointer can change it

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
	p = &y;//don't use *p = &y;
	cout << "VALUE OF pointer FOR Y ==>>  " << p << endl;
	cout << "ADDRESS OF pointer FOR Y ==>>  " << &p << endl;
	cout << "================derefrances===============" << endl;
	cout << "VALUE Y by y ==>>  " << y << endl;
	cout << "VALUE Y by *p ==>>  " << *p << endl;
	cout << "=============== y=20 by y ================" << endl;
	y = 20;
	cout << "VALUE Y by y ==>>  " << y << endl;
	cout << "VALUE Y by pointer ==>>  " << *p << endl;
	cout << "=============== y=15 by *p ================" << endl;
	*p = 15;//don't use p=15;
	cout << "VALUE Y by y ==>>  " << y << endl;
	cout << "VALUE Y by pointer ==>>  " << *p << endl;



}