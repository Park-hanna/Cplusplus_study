/*
���� ���� 1
	int num;
	num = 20

���� ���� 2
	int num1, num2;
	double num3 = 1.23, num4 = 4.56

literal constant : ����� �޸� ������ ����Ű�� �̸��� ����
	��� Ÿ�Կ� ���� ����
	������ -> 123, -456
		default  : signed int
		u(U) : unsugned int
		l(L) : signed long
		ul(uL, UL, Ul) : unsigned long
		longlong(ull, Ull, uLL, ULL) : unsigned long long
	�Ǽ��� -> 3.14, -3.14
		f(F) : float
		default : double
		l(L) : long double
	������ -> 'a'
	pointer -> nullptr
		: nullptr Ű���� ����� ������ Ÿ��, ���������� ��ȯ �Ұ�
		0 ����� ��� ���� ���� nullptr == 0 (true) ��ȯ
	���� ���ͷ� ��� -> auto a = 0B010111;
		: 0B �Ǵ� 0b ���λ� ����� 0, 1 sq������ ǥ��

symbolic constant : ����� ���ÿ� �ʱ�ȭ�ؾ���
	const int ages = 30;

*/

#include <iostream>
using namespace std;

int study_arithmetic(int age) {

	cout << "number 10 = Decimal " << age << " , " << endl;
	cout << oct;
	cout << "number 10 = Octal " << age << " and, " << endl;
	cout << hex;
	cout << "number 10 = Hexadecimal " << age << " Number Trnasform Done! \n" << endl;

	return 0;
}

