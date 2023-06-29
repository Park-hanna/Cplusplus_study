#include <iostream>
using namespace std;

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);

double Calculator(double, double, double (*func)(double, double));

int study_func_pointer_1() {

	double (*calc)(double, double) = NULL; // def function pointer
	double num1 = 3, num2 = 4, result = 0;
	char oper = '*';

	switch (oper) {

	case '+':
		calc = Add;
		break;

	case '-':
		calc = Sub;
		break;

	case '*':
		calc = Mul;
		break;

	case '/':
		calc = Div;
		break;

	default:
		cout << "Only four arithmetic operations (+, -, *, /) are supported.";
		break;
	}

	result = Calculator(num1, num2, calc);
	cout << "Four arithmetic operations result is " << result << "." << endl;
	return 0;
}

double Calculator(double num1, double num2, double (*func)(double, double)) { return func(num1, num2); }