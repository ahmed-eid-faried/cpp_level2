#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include <vector>
using namespace std;
 
void DeleteRecordFromFile(string path, string DeletedRecord) {
	vector<string> vFile;
	DataFromFileToVector(path,vFile);
	for (string& Line : vFile) {
		if (Line== DeletedRecord) {
			Line = "";
		}
	}
	SaveVectorToFile(path, vFile);
}


void DeleteRecordFromFileEx() {

	cout << "File Content Before Delete.\n";
	ReadFileContent("file.txt");
	DeleteRecordFromFile("file.txt", "Ali");
	cout << "\n\nFile Content After Delete.\n";
	ReadFileContent("file.txt");
}


