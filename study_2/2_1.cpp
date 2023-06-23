
#include <iostream>
using namespace std;

int study_floating_point_error();
int study_type_conversion_1();
int study_type_conversion_2();

int main() {

	//study_floating_point_error();
	cout << "\n";
	study_type_conversion_1();
	cout << "\n";
	study_type_conversion_2();
	cout << "\n";

}


// �ε� �Ҽ� �� ������� �Ǽ� ǥ���� �߻��� �� �ִ� ���� ����
int study_floating_point_error() {

	int i;
	float sum = 0;

	for (i = 0; i < 1000; i++) {
		sum += 0.1;
	}

	cout << "The sum of 0.1 added 1000 times is " << sum << endl;

	return 0;
}


/*
Ÿ�� ��ȯ ����
1. ������ Ÿ�� ��ȯ -> �ڵ� Ÿ�� ��ȯ : 
	���� ����, ��� ���꿡�� �����Ϸ��� �ڵ����� ����
	���� ����� �������� ������ ������ Ÿ���� ���� ������ Ÿ������ ��ȯ ����
	��� ����� ������ �ս� �ּ�ȭ �������� ����
		�Ʒ��� ���� ������ �ڵ� Ÿ�� ��ȯ
		char -> short -> int -> long -> float -> double -> long double

2. ����� Ÿ�� ��ȯ -> ���� Ÿ�� ��ȯ :
	����ڰ� Ÿ�� cast == () �����ڸ� ����� ���������� ���� ��ȯ
	1) (��ȯ�� Ÿ��) ��ȯ�� ������ // C, C++ ���� ����
	2) ��ȯ�� Ÿ�� (��ȯ�� ������) // C++ ������ ����
*/ 

int study_type_conversion_1() {

	// ���� ����� ������ Ÿ�� ��ȯ
	int num1 = 3.1415;
	int num2 = 8.3E12;
	double num3 = 5;

	cout << "���� ����� ������ Ÿ�� ��ȯ" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;

	cout << "\n��� ����� ������ Ÿ�� ��ȯ" << endl;
	// ��� ����� ������ Ÿ�� ��ȯ
	double result1 = 5 + 3.14;
	double result2 = 5.0f + 3.14;

	cout << "result1 = " << result1 << endl;
	cout << "result2 = " << result2 << endl;	

	return 0;
}

int study_type_conversion_2() {

	// ����� Ÿ�� ��ȯ 
	int num1 = 1;
	int num2 = 4;

	double result1 = num1 / num2;
	double result2 = (double)num1 / num2;
	double result3 = double(num1) / num2;

	cout << "����� Ÿ�� ��ȯ " << endl;
	cout << "result 1 = " << result1 << endl;
	cout << "result 2 = " << result2 << endl;
	cout << "result 3 = " << result3;

	return 0;
}

/* 
Operator (C++ ���� �߰��� operator)

1. ���� ���� ������ (scope resolution operator) (::)
	c++ ���� �켱���� �ֻ�
	���� �������� ���� �ĺ��ڸ� �ĺ�, �����ϴµ� ��� (�ĺ��ڷ� ����, �Լ�, ����ü�� �� �� ����)
	������ �̸� �տ� ���̸� �ش� ������ �������� ����϶�� �ǹ�
	Ŭ������ ���� namespace ����� �ĺ��ϰų�, Ŭ������ ���� ��� ȣ�� ����
		1) ::�ĺ���					2) Ŭ�����̸�::�ĺ���		
		3) ���ӽ����̽�::�ĺ���		4) ����ü::�ĺ���		

2. ��� ������ ������ (pointer-to-member operator) (.* or ->*)
	�ش� �����ڸ� ����� Ŭ���� ����� ����Ű�� �����͸� ���� �� �� ����
	1) ������ �ǿ����ڰ� Ŭ���� Ÿ�� ��ü�� ��� : .*
		classTypeObject.*memberName
	2) ������ �ǿ����ڰ� Ŭ���� Ÿ���� ��ü�� ����Ű�� �������� ��� : ->*
		classTypeObjectPointer->*memberName

3. typeid operator
	�ش� �����ڸ� ����� ��ü�� Ÿ�� ���� Ȯ�� ����
	��Ÿ�ӽ� ��ü�� Ÿ�� �����Ҷ� �����
	���ø����� ���ø� �Ű������� Ÿ���� ������ ���� ���

	typeid(ǥ����)
*/