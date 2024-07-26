#pragma once
#include <iostream>
#include <cctype>
using namespace std;

void SomeCCTYPEFunctions() {
    char x = 'a';
    char y = 'B';
    cout << x << endl << y << endl;
    x = toupper(x);
    y = tolower(y);
    cout << x << endl << y << endl;
    cout << "=======================================" << endl;
    cout << "islower (a) ==>> " << islower('a') << endl;
    cout << "isupper (A) ==>> " << isupper('A') << endl;
    cout << "isdigit ('2') ==>> " << isdigit('2') << endl;
    cout << "ispunct (#) ==>> " << ispunct('#') << endl;
    cout << "ispunct (a) ==>> " << ispunct('a') << endl;
    cout << "=======================================" << endl;
    cout << "islower (a) ==>> " << (islower('a') ? "true" : "false") << endl;
    cout << "isupper (A) ==>> " << (isupper('A') ? "true" : "false") << endl;
    cout << "isdigit ('2') ==>> " << (isdigit('2') ? "true" : "false") << endl;
    cout << "ispunct (#) ==>> " << (ispunct('#') ? "true" : "false") << endl;
    cout << "ispunct (a) ==>> " << (ispunct('a') ? "true" : "false") << endl;
}
