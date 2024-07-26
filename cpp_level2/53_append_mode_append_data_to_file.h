#pragma once
#include<fstream>
#include<iostream>
using namespace std;

void AppendModeAppendDataToFile() {
	fstream MyFile;
	MyFile.open("file3.txt", ios::out|ios::app);//append Mode  
	/// áæ ãæÌæÏ ÈíÖíİ Úáíå æ áæ ãÔ ãæÌæÏ ÈíäÔì ãä ÇáÇæá
	if (MyFile.is_open()) {
		MyFile << "MY FristName is Ahmed\n";
		MyFile << "MY LastName is Mady\n";
		MyFile << "MY Salary is 222222\n";
		MyFile.close();
	}

 

}

 
