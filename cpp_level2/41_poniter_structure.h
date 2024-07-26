#pragma once
#pragma once
#include <iostream>
#include <vector>
using namespace std;
struct stEmployee2 {
	string FristName;
	string LastName;
	int Salary;
};
//int ReadNumB(string Message = "Enter intger number: ") {
//	int Num;
//	cout << Message;
//	cin >> Num;
//	while (cin.fail())
//	{
//		cin.clear();
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//		cout << "Wrong Input\n";
//		cout << "Please, " << Message;
//		cin >> Num;
//	}
//	return  Num;
//}
//string ReadString(string Message = "Enter Text: ") {
//	string Text;
//	cout << Message;
//	cin >> Text;
//	return  Text;
//}

void PoniterStrucure() {
	stEmployee2 Employee, * ptr;
	ptr = &Employee;
	ptr->FristName = ReadString("Enter FristName: ");
	ptr->LastName = ReadString("Enter LastName: ");
	ptr->Salary = ReadNumB("Enter Salary: ");
	cout << "======================================" << endl;
	cout << "FristName \t==>>> \t" << ptr->FristName << " \n";
	cout << "LastName \t==>>> \t" << ptr->LastName << " \n";
	printf("Salary \t==>>> \t%d \n", ptr->Salary);
	cout << "======================================" << endl;
	printf("ptr \t==>>> \t%d \n",  ptr );
	cout << endl;
}