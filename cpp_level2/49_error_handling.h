#pragma once
#include<iostream>
#include <vector>
using namespace std;
 
void ErrorHanding() {
	vector<int> vNumbers = { 1,2,3,4,5 };

	try {
		cout << vNumbers.at(5) << endl;

	}
	catch(...){
		cout << "out of bound" << endl;
	}

}

