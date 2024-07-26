#pragma warning(disable : 4996)
#pragma once
#include <iostream>
#include <ctime>
using namespace std;
void DetailsOfDatetimeLocalUtcTime() {
	time_t t = time(0);//get now time
	cout << "t ==>> " << t << endl;
	cout << "&t ==>> " << &t << endl;
	char* dt = ctime(&t);//convert time to char*
	cout << "char* dt ==>> Local date and time is: " << dt << endl;
	cout << "ctime(&t) ==>> Local date and time is: " << ctime(&t) << endl;
	cout << "====================================" << endl;
	tm* gmtm = gmtime(&t);//converting now to tm struct for UTC date/time
	cout << "gmtm tm_year: " << gmtm->tm_year << endl;
	cout << "gmtm tm_mon: " << gmtm->tm_mon << endl;
	cout << "gmtm tm_wday: " << gmtm->tm_wday << endl;
	char* dt2 = asctime(gmtm);
	cout << "char* dt ==>> Local date and time is: " << dt2 << endl;
	cout << "====================================" << endl;
	cout << asctime(gmtime(&t)) << endl;


}
void DatetimeLocalUtcTime() {
	DetailsOfDatetimeLocalUtcTime();
	cout << "====================================" << endl;
	time_t t = time(0);//get now time
	cout << ctime(&t) << endl;//convert time to char*
	cout << "====================================" << endl;
	cout << asctime(gmtime(&t)) << endl;
	cout << gmtime(&t)->tm_year << endl;
	//gmtime convert time to struct for UTC date/time
	//asctime convert time to char*
}
