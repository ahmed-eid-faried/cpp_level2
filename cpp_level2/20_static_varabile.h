#pragma once
#include<iostream>
using namespace std;
void TestFun() {
	static int Num = 233; // ����� ��  ������ ������ �� �������� ���� ������
	cout << Num << endl;

}
void StaticVarabile() {
	TestFun();
	TestFun();
	TestFun();
	TestFun();
}


