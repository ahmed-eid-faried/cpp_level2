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


	fstream MyFile2;
	MyFile2.open("file2.cpp", ios::out);
	MyFile2 << "#include <iostream>" << endl;
	MyFile2 << "using namespace std;" << endl;
	MyFile2 << "int main()" << endl;
	MyFile2 << "{" << endl;
	MyFile2 << "cout << \"Hi, Ahmed\"  << endl;" << endl;
	MyFile2 << "return 0;" << endl;
	MyFile2 << "}" << endl;
	MyFile.close();

}

