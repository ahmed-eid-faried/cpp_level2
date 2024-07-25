#pragma once
#pragma once
#include <iostream>
using namespace std;
//ÈÕ Úáì ÌãíÚ ÇáÎíÇÑÇÊ ÚäÏ ÖÛØ ßáíß íãä Úáì ÇáÏÇáÉ
void Func2();

void Func5() {
	cout << "I am a Function" << endl;
}

void KKKKKK() {
	Func5();
}
void Func3() {
	KKKKKK();
}

void Func1() {
	Func2();
	KKKKKK();
}


void Tips() {
	Func1();
}


void Func2() {
	Func3();
}
