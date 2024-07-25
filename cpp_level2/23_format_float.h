#pragma once
#include<iostream>
using namespace std;
void FormatFloat() {

	float PI = 3.14159265;

	//Precision specification  
	printf("Precision specification of %.*f\n", 1, PI);
	printf("Precision specification of %.*f\n", 2, PI);
	printf("Precision specification of %.*f\n", 3, PI);
	printf("Precision specification of %.*f\n", 4, PI);
	printf("Precision specification of %.*f\n", 5, PI);
	printf("Precision specification of %.*f\n", 6, PI);
	printf("Precision specification of %.*f\n", 7, PI);
	printf("Precision specification of %.*f\n", 8, PI);
	cout << "=================================="<<endl;
	float x = 7.2, y = 9.33;
	printf("The float division is : %.2f / %.2f = %.2f\n", x, y, x / y);
	cout << "==================================" << endl;
	double d = 12.45;
	printf("The double value is : %.1f \n", d);
	printf("The double value is : %.3f \n", d);
	printf("The double value is : %.4f \n", d);
}


