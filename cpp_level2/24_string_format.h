#pragma once
#include<iostream>
using namespace std;

 void StringFormat() {
	char Name[] = "Ahmed Mady";
	char Jop[] = "Software Developer";
	// print string and String  
	printf("Dear %s, How are you?\n\n", Name);
	// print Char
	printf("Welcome to %s School!\n\n", Jop);
	char c = 'S';
	printf("Setting the width of c :%*c \n", 1, c);
	printf("Setting the width of c :%*c \n", 2, c);
	printf("Setting the width of c :%*c \n", 3, c);
	printf("Setting the width of c :%*c \n", 4, c);
	printf("Setting the width of c :%*c \n", 5, c);
}