#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include <vector>
#include "55_load_data_from_file_to_vector.h"
#include "56_save_vector_to_file.h"
#include "54_read_mode_print_file_content.h"
using namespace std;

void UpdateRecordInFile(string path, string OldRecord, string UpdateRecord) {
	vector<string> vFile;
	DataFromFileToVector(path, vFile);
	for (string& Line : vFile) {
		if (Line == OldRecord) {
			Line = UpdateRecord;
		}
	}
	SaveVectorToFile(path, vFile);
}


void UpdateRecordInFileEx() {

	cout << "File Content Before Update.\n";
	ReadFileContent("file.txt");
	UpdateRecordInFile("file.txt", "SARA","MOM");
	cout << "\n\nFile Content After Update.\n";
	ReadFileContent("file.txt");
}


