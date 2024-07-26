#pragma once
#include <iostream>
using namespace std;
void StringFunctions() {
	string name = "Ahmed Mady";
	cout << "=========== length ===========" << endl;
	cout << name.length() << endl;
	cout << "=========== at ===========" << endl;
	cout << name.at(6) << endl;
	cout << "=========== append ===========" << endl;
	name.append(" I  Love Programing");
	cout << name << endl;
	cout << "=========== push_back ===========" << endl;
	name.push_back('X');
	cout << name << endl;
	cout << "=========== pop_back ===========" << endl;
	name.pop_back();
	cout << name << endl;
	cout << "=========== insert ===========" << endl;
	name.insert(5, " Eid");
	cout << name << endl;
	cout << "=========== substr ===========" << endl;
	cout << name.substr(6, 3) << endl;
}