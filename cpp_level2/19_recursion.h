#pragma once
#include <iostream>
using namespace std;
//RecursionFromMDownToN
void FromMDownToN(int N, int M) {
	if (M >= N) {
		cout << M << endl;
		FromMDownToN(N, M - 1);
	}
}

//RecursionPowerM_N
int PowerN_Of_M(int Base, int Power) {
	if (Power == 0) return 1;
	if (Power >= 1) {
		return Base * PowerN_Of_M(Base, Power - 1);
	}
}

void Recursion() {
	FromMDownToN(1, 10);
	cout << "===================" << endl;
	cout << PowerN_Of_M(2, 5) << endl;
	//FromMDownToN(1, 10000000);//Stack overflow
}