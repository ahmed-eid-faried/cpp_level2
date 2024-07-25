#pragma once
#include<iostream>
using namespace std;
void TestFun() {
	static int Num = 233; // íÈÏÇÁ ãÚ  ÇáÏÇáÉ æíäÊåì ãÚ ÇáÈÑäÇãÌ áÇäì ãÍÊÇÌå
	cout << Num << endl;

}
void StaticVarabile() {
	TestFun();
	TestFun();
	TestFun();
	TestFun();
}


