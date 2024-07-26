#pragma once
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

void DataFromFileToVector(string path, vector<string>& vFile) {
	fstream MyFile;
	MyFile.open(path, ios::in);//read Mode  
	if (MyFile.is_open()) {
		string Line;
		while (getline(MyFile, Line))
		{
			vFile.push_back(Line);
		}
		MyFile.close();
	}
}
void ReadFileByVector(vector<string>& vFile) {
	for (string& Line : vFile) {
		cout << Line << endl;
	}
}


void LoadDataFromFileToVector() {
	vector<string> vFile;
	DataFromFileToVector("file3.txt", vFile);
	ReadFileByVector(vFile);
	cout << "====================================" << endl;
	vector<string> vFile2;
	DataFromFileToVector("file2.cpp", vFile2);
	ReadFileByVector(vFile2);

}



