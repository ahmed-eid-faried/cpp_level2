#pragma once
#include <iostream>
using namespace std;

//defination
void Sum(int a, int b, int c = 0, int d = 0) {
	cout << a + b + c + d << endl;
}

void DefaultParameters() {
	Sum(12, 25);
	Sum(12, 25, 4 );
	Sum(12, 25, 4, 44);
}


