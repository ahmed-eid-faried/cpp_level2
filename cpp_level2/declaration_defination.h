#pragma once
#include <iostream>
using namespace std;
//declaration  
void TestFunction(int, int);

void Declaration() {
	TestFunction(12, 25);// áÇÒã íÊã ÊÚÑíİ ÇáÏÇáÉ ŞÈá ÇÓÊÏÚÇÁåÇ Çæ ÇáÇÚáÇä ÚäåÇ İŞØ ÍÊì áÇ íÍÏæË ÎØÇÁ

}



//defination
void TestFunction(int a, int b) {
	cout << a << " & " << b << " ====>>>> " << (a & b) << endl;
	cout << a << " && " << b << " ====>>>> " << (a && b) << endl;
	cout << a << " | " << b << " ====>>>> " << (a | b) << endl;
	cout << a << " || " << b << " ====>>>> " << (a || b) << endl;
	cout << "\n==============================================\n";

}