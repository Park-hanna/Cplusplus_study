/*
inline function : �Ϲ����� �Լ��� ȣ������� ��ġ�� �ʰ� �Լ��� ��� �ڵ带 ȣ���
�ڸ��� �ٷ� �����ϴ� ���
�Լ� ȣ�⿡ �ɸ��� �ð��� ����ǳ� �Լ� ȣ�� �������� ����� ���� ������ �����ϰ� ��
���� �ڵ尡 �ſ� ���� �Լ����� �ζ��� �Լ��� �����ϴ� ���� ����

�Լ� ȣ���� �ð��� �ɸ� �̶� �����ɸ��� �ͺ��� ���� �ð��� 
�ſ� ª�� ���� �δ�� �� ����
�̷���쿡 �ζ����Լ� ����

inline �Լ� ���� or inline �Լ� ����

*/

#include <iostream>
#include <stdio.h>

using namespace std;

inline int Sub(int x, int y) {
	return x - y;
}

inline void Print(int x) {
	cout << "Operate result : " << x << endl;
}


int study_inline_func() {

	int num1 = 5, num2 = 3;
	int result;

	result = Sub(num1, num2);
	Print(result);

	return 0;

}

int study_inline_func_2() {

	int num1 = 5, num2 = 3;
	int result;

	{
		int x = num1, y = num2;
		result = x - y;
	}

	{
		int x = result;
		cout << "Operate result : " << x << endl;
	}

	return 0;
}

/*
��ũ�� �Լ��� �Ϲ� �Լ��� �ٸ��� �ܼ� ġȯ�� ����, �Ϲ� �Լ��� ���� ������� ���۾���
���� ��ũ�� �Լ��� �Ϲ� �Լ�ó�� ����Ϸ��� ��� �μ��� ��ȣ {}�� ���ξ���
*/

inline int Sqr(int x) {
	return x * x;
}

int study_macro_func(void) {

	int result;
	int x = 5;

	cout << "Operate Result : " << Sqr(10) << endl;
	cout << "Operate Result : " << Sqr(x) << endl;
	cout << "Operate Result : " << Sqr(x+3) << endl;


	return 0;
}