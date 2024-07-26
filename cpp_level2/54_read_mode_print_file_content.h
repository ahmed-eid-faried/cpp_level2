#pragma once
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

void ReadFileContent(string path) {
	fstream MyFile;
	MyFile.open(path, ios::in);//read Mode  
	if (MyFile.is_open()) {
 		string Line;
		while (getline(MyFile,Line))
		{
			cout << Line << endl;
		}
		MyFile.close();
	}
}


void ReadModePrintFileContent() {
	ReadFileContent("file.txt");
	cout << "====================================" << endl;
	ReadFileContent("file3.txt");
	cout << "====================================" << endl;
	ReadFileContent("file2.cpp");

}


 