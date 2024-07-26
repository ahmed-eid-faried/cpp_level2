#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include <vector>
using namespace std;

void SaveVectorToFile(string path, vector<string>& vFile) {
	fstream MyFile;
	MyFile.open(path, ios::out);
	if (MyFile.is_open()) {
		for (string& Line : vFile) {
			if (Line != "") {
				MyFile << Line << endl;
			}
		}
		MyFile.close();
	}
}


void SaveVectorToFileEx() {
	vector<string> vFile = { "AHMED","FATEN","MADY","ALI","SARA" };
	SaveVectorToFile("file.txt", vFile);
 

}
 
 

