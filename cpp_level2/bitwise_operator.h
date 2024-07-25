#pragma once
#include <iostream>
using namespace std;

void Bitwise(int a, int b) {
	cout << a << " & " << b << " ====>>>> " << (a & b) << endl;
	cout << a << " && " << b << " ====>>>> " << (a && b) << endl;
	cout << a << " | " << b << " ====>>>> " << (a | b) << endl;
	cout << a << " || " << b << " ====>>>> " << (a || b) << endl;
	cout << "\n==============================================\n";

}

void BitwiseOperator() {
	Bitwise(12, 25);

}