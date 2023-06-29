#include <iostream>
using namespace std;

typedef double(*Arith)(double, double); //typedef Ű���� ����� ���ο� �̸� ����

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);

double Calculator2(double, double, Arith);


int study_func_pointer_2() {

	Arith calc = NULL; //�Լ� ������ ����
	double num1 = 4, num2 = 5, result = 0;
	char oper = '+';

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

	result = Calculator2(num1, num2, calc);
	cout << "Four arithmetic operations result is " << result << "." << endl;
	return 0;
}

double Calculator2(double num1, double num2, Arith func) { return func(num1, num2); }
