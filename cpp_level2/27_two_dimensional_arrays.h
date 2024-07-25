#pragma once
#include <iostream>
using namespace std;


void TwoDimensionalArrays() {
	int TwoDimensionalArray[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {
			TwoDimensionalArray[i][j] = (j + 1)*(i + 1);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {
			printf("%0*d ", 2, TwoDimensionalArray[i][j]);
		}
		cout << endl;
	}


}