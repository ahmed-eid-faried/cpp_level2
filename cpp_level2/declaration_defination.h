#pragma once
#include <iostream>
using namespace std;
//declaration  
void TestFunction(int, int);

void Declaration() {
	TestFunction(12, 25);// ���� ��� ����� ������ ��� ��������� �� ������� ���� ��� ��� �� ����� ����

}



//defination
void TestFunction(int a, int b) {
	cout << a << " & " << b << " ====>>>> " << (a & b) << endl;
	cout << a << " && " << b << " ====>>>> " << (a && b) << endl;
	cout << a << " | " << b << " ====>>>> " << (a | b) << endl;
	cout << a << " || " << b << " ====>>>> " << (a || b) << endl;
	cout << "\n==============================================\n";

}