#pragma once
#pragma once
#include <iostream>
#include <vector>
using namespace std;
struct stEmployee {
	string FristName;
	string LastName;
	int Salary;
};
int ReadNumB(string Message = "Enter intger number: ") {
	int Num;
	cout << Message;
	cin >> Num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong Input\n";
		cout << "Please, " << Message;
		cin >> Num;
	}
	return  Num;
}
string ReadString(string Message = "Enter Text: ") {
	string Text;
	cout << Message;
	cin >> Text;
	return  Text;
}
void ReadEmployees(vector <stEmployee>& vEmployees) {
	int IsFinshed = 1;
	stEmployee TempEmployee;
	while (IsFinshed == 1)
	{
		TempEmployee.FristName = ReadString("Enter FristName: ");
		TempEmployee.LastName = ReadString("Enter LastName: ");
		TempEmployee.Salary = ReadNumB("Enter Salary: ");
		vEmployees.push_back(TempEmployee);
		cout << "\nAre you enter any other value [0]No/[1]YES? "<<endl;
		cin >> IsFinshed;
		if (IsFinshed == 0)break;
	}
}
void PrintEmployees(vector <stEmployee>& vEmployees) {
	for (stEmployee& Number : vEmployees)
	{
		cout << "FristName \t==>>> \t" << Number.FristName << " \n";
		cout << "LastName \t==>>> \t" << Number.LastName << " \n";
		printf("Salary \t==>>> \t%d \n", Number.Salary);
		cout << endl;
	}
}
void VectorOfStrucure() {
	vector <stEmployee> vEmployees;

	ReadEmployees(vEmployees);
	cout << "======================================" << endl;
	PrintEmployees(vEmployees);

}