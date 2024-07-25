#pragma once
#include<iostream>
using namespace std;

void NavigationWithoutZero(int Num) {
	cout << "NavigationWithoutZero===>>> ";
	cout << Num << " Is ==>> ";
	Num > 0 ? cout << "Positive" : cout << "Navigation" << endl;
}
void Navigation(int Num) {
	cout << "Navigation===>>> ";
	cout << Num << " Is ==>> ";
	cout << (Num == 0 ? "Zero" :
		(Num > 0 ? "Positive" : "Navigation")) << endl;
}

void ShortHandIf()
{

	NavigationWithoutZero(-12);
	NavigationWithoutZero(0);
	NavigationWithoutZero(12);
	cout << "\n========================" << endl;
	Navigation(-12);
	Navigation(0);
	Navigation(12);
}