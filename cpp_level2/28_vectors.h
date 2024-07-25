#pragma once
#include <iostream>
#include <vector>
using namespace std;


void VectorsFun() {
	vector <int> Numbers = { 1,2,3,4,5,6,7,8,9,10 };

	for (int Number : Numbers)
	{
		printf("slow by copy==>>> %0*d ", 2, Number);
		cout << endl;
	}
	cout << "======================================" << endl;
	for (int& Number : Numbers)
	{
		printf("fast by &ref==>>> %0*d ", 2, Number);
		cout << endl;
	}

}