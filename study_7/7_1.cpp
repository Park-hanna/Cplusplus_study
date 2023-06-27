/*
�Լ� ȣ��� �������� �μ��� ���� ����,
 ��ȯ�ô� 1�� ���� ����

c++������ �Լ� ��ȯ������ �迭�� ������ ��� Ÿ���� ����� �� ����
������, ����ü�� ��ü�� ���Ե� �迭�� ��ȯ�� �� ����

�Լ� ���� ���� : c++ �Լ� ���ǽ� ������ �ſ� �߿���
	���� ���� �� ���� �Լ� ���� �� �� �Լ� ����

�μ� ���� ��� :
 1. ���� ���� ���� : �μ��� ���޵Ǵ� ������ ������ �ִ� ���� �Լ� ���� �Ű������� �����ϴ� ���
			����� ������ �ʱ�ȭ�� �Ű������� �μ��� ���޵� �����ʹ� ���� ���� ����
			���� �Լ� ������ �Ű����� ������ �μ��� ���޵Ǵ� ������ �ƹ��� ���� ����

 2. ������ ���� ���� : �μ��� ���޵� ������ ���� ���簡 �ƴ� ���� �����͸� ���� �����ϴ� ���
			C������ �����͸� ����� �μ��� ���޵� ������ �ּҰ��� ���� 
			������ c++������ �̷� ������ �����ڸ� ����� ����

main() �Լ��� �μ� ���� : ���α׷� ����� ���� ���� �ڵ� ȣ��Ǵ� �Լ�
	

��� ȣ��(recursive call) : �Լ� ���ο��� �Լ��� �ڱ� �ڽ��� �� ȣ���ϴ� ��
	�ڱⰡ �ڽ��� ��� ȣ���� ������ �ݺ��� �� ���� �Լ� ������ ��� ȣ���� �ߴ��ϵ���
	������ ����� ��ɹ��� �����ؾ��� -> ���� �ݺ��� ���� ���� ���� �����÷ο�� ����� �� 

�Լ� ������ : ���ǵ� �Լ��� ���α׷� ����� �� ��� ���� �޸𸮷� �ö�
	�̶� �Լ� �̸��� �޸𸮿� �ö� �Լ��� ���� �ּҸ� ����Ű�� ������ ����� ��
	�Լ��� ���� �ּҸ� ����Ű�� ������ ����� �Լ� �����Ͷ� �� 
	���� �ּ� ���� ������ �� ���� ������

������ Ÿ���� �Լ��� ��ȯ���� �Ű������� ���� ������
	��, �Լ��� ������ �˾ƾ߸� �ش� �Լ��� �´� �Լ� �����͸� ���� �� ����
	�Լ� ���� ���� : void Func(int,int);
	�Լ� ������ ���� : void (*ptr_func)(int,int); 
		->������ �켱���� ������ �ݵ�� *ptr_func �κ��� ��ȣ {}�� �ѷ��ξ� ���� ������ ��

�Լ� ������ ǥ��� : ������ �� ���� : double (*calc)(double, double) = NULL;
1. typedef Ű���� : typedef double (*CalcFunc)(double,double); 
					//�Լ� �����Ϳ� CalcFunc �̶�� ���ο� �̸��� ���� 
					CalcFunc ptr_func = calc;

2. auto Ű���� : auto ptr_func = calc;
*/ 

#include <iostream>
using namespace std;

typedef double(*Arith)(double, double); //typedef Ű���� ����� ���ο� �̸� ����

double Calculator2(double, double, Arith);

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double, double, double (*func)(double, double));

int study_func_pointer_1();
int study_func_pointer_2();

int main(void) {

	study_func_pointer_1();
	study_func_pointer_2();

}

int study_func_pointer_1() {

	double (*calc)(double, double) = NULL; // def function pointer
	double num1 = 3, num2 = 4, result = 0;
	char oper = '*';

	switch (oper) {

	case '+' :
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
	cout << "Four arithmetic operations result is " << result << "."<<endl;
	return 0;
}

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

double Add(double num1, double num2) { return num1 + num2; } 
double Sub(double num1, double num2) { return num1 - num2; }
double Mul(double num1, double num2) { return num1 * num2; }
double Div(double num1, double num2) { return num1 / num2; }
double Calculator(double num1, double num2, double (*func)(double, double)) { return func(num1, num2); }

double Calculator2(double num1, double num2, Arith func) { return func(num1, num2); }
