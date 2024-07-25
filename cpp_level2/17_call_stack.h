#pragma once
#include <iostream>
using namespace std;

void Fun5() {
	cout << "I am a Function" << endl;
}

void Fun4() {
	Fun5();
}
void Fun3() {
	Fun4();
}
void Fun2() {
	Fun3();
}
void Fun1() {
	Fun2();
}
void CallStack() {
	Fun1();
}


