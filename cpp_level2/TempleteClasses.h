#pragma once
template <class T>
class Calculator {
private:
	T _Num1;
	T _Num2;

public:
	Calculator(T Num1, T Num2) {
		_Num1 = Num1;
		_Num2 = Num2;
	}
	void PrintResult() {
		cout << "Number1 = "  << _Num1 << ", " << "Number2 = "  << _Num2 << "." << endl;
		cout << _Num1 << " + " << _Num2 << " = " << Add() << endl;
		cout << _Num1 << " - " << _Num2 << " = " << Subtract() << endl;
		cout << _Num1 << " * " << _Num2 << " = " << Multiply() << endl;
		cout << _Num1 << " / " << _Num2 << " = " << Divide() << endl;
		cout << _Num1 << " % " << _Num2 << " = " << Mod() << endl;
	}
	T Add() {
		return _Num1 + _Num2;
	}
	T Subtract() {
		return _Num1 - _Num2;
	}
	T Multiply() {
		return _Num1 * _Num2;
	}
	T Divide() {
		return _Num1 / _Num2;
	}
	T Mod() {
		return _Num1 % _Num2;
	}


};

void TempleteClasses() {

	Calculator<int> Cal(12, 4);
	Cal.PrintResult();

}