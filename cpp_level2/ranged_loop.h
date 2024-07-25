#pragma once
#include<iostream>
using namespace std;

void Ex1() {
	int Arr[] = { 1,2,3,4,55,67,8,75 };
	for (int i : Arr)
	{
		cout << i << endl;
	}
}
void Ex2() {
	for (char i : { 'a','b','c','e','d'})
	{
		cout << i << endl;
	}
}

void RangedLoop()
{

	Ex1();
	cout << "\n========================" << endl;
	Ex2();

}