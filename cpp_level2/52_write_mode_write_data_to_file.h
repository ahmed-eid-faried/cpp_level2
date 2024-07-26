#pragma once
#include<fstream>
#include<iostream>
using namespace std;

void WriteModeWriteDataToFile() {
	fstream MyFile;
	MyFile.open("file.txt", ios::out);// WriteMode// »нг”Ќ ябе ж ня » гд «жб жћѕнѕ
	if (MyFile.is_open()) {
		MyFile << "MY FristName is Ahmed\n";
		MyFile << "MY LastName is Mady\n";
		MyFile << "MY Salary is 222222\n";
		MyFile.close();
	}


 	MyFile.open("file.cpp", ios::out);
	MyFile << "#include <iostream>" << endl;
	MyFile << "using namespace std;" << endl;
	MyFile << "int main()" << endl;
	MyFile << "{" << endl;
	MyFile << "cout << \"Hi, Ahmed\"  << endl;" << endl;
	MyFile << "return 0;" << endl;
	MyFile << "}" << endl;
	MyFile.close();

}

 