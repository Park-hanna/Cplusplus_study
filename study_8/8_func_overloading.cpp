/*
function overloading : ���� �̸��� �Լ��� �ߺ��� �����ϴ� ��

�����Լ��� �ϳ��� �̸����� ��������
��, �Լ� �����ε��̶� ���� ���� ó���ϴ� �Լ��� �Ű������� ������ ���� �ٲ�
�ϳ��� �̸����� �ۼ��� �� �ְ� ���ִ� ��
	��ü ���� ���α׷����� Ư¡ �� ������ ������

function signature : �Լ��� ������ ��õǴ� �Ű����� ����Ʈ

���� �� �Լ��� �Ű������� ����, �� Ÿ���� ��� ���ٸ�, �� �� �Լ��� �ñ״�ó�� ���ٰ� ��
��, �Լ� �����ε��� ���� �ٸ� �ñ״�ó�� ���� ���� �Լ��� ���� �̸����� �����ϴ� ��

�Լ��� ���� ����
1. void Display(const char* str, int n);             // ���ڿ� str�� n�� �����.
2. void Display(const char* str1, const char* str2); // ���ڿ� str1�� str2�� ���޾� �����.
3. void Display(int x, int y);                       // x * y�� �����.
4. void Display(double x, double y);                 // x / y�� �����.

Display() �Լ��� ȣ���ϸ� �ڵ����� ���� �ñ״�ó�� ���� �Լ� ���� ã�� ȣ��

�Լ��� ȣ�� ����
1. Display("C++", 3);              // 1�� Display() �Լ� ȣ�� -> "C++C++C++"
2. Display("C++", " Programming"); // 2�� Display() �Լ� ȣ�� -> "C++ Programming"
3. Display(3, 4);                  // 3�� Display() �Լ� ȣ�� -> 12
4. Display(4.2, 2.1);              // 4�� Display() �Լ� ȣ�� -> 2
5. Display(4.2, 3);                // 3���� 4�� ��� ȣ�� ���� -> ������ ������ �߻���.

5���� ��� ��ȣ�� ȣ���̵� ���� ��ȣ�� ȣ���� ������� �ʾ� ���� �߻�
*/

#include <iostream>
using namespace std;

int add(int, int, int);
double add(double, double);

int study_func_overloading(void) {
	
	cout << "int function add = " << add(1, 2, 3) << endl;
	cout << "double function add = " << add(4.5, 6.2) << endl;

	return 0;

}

int add(int a, int b, int c) {
	return a + b + c;
}

double add(double x, double y) {
	return x + y;
}
