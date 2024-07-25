#pragma once
#include <iostream>
using namespace std;
void Mul(int a, int b) {
	cout << a + b << endl;
}
void Mul(int a, int b, int c) {
	cout << a + b + c << endl;
}
void Mul(int a, int b, int c, int d) {
	cout << a + b + c + d << endl;
}
void Mul(float a, float b, float c, float d) {
	cout << a + b + c + d << endl;
}

void OverLoading() {
	Mul(12, 25);
	Mul(12, 25, 4);
	Mul(12, 25, 4, 44);
	Mul(12.2, 2.4, 4.4, 4);
}


