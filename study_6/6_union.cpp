/*
����ü : Union : ��� �鿡�� ����ü�� ������, ��� ��� ������ �ϳ��� �޸� ������ �����ϴ� ���� �ٸ�
		��� ��� ������ ���� �޸𸮸� �����ϱ� ������ ����ü�� �ѹ��� �ϳ��� ��� ������ ����� �� ����
		������ �ұ�Ģ ���̰� �̸� �� �� ���� �پ��� Ÿ���� �����͸� ������ �� �ֵ��� ����� Ÿ��

����ü ũ�� : ũ�Ⱑ ���� ū ��� ������ ũ��� �޸� �Ҵ� ����
���� ����ü �迭 ���� ���� ũ��� ������ �迭 ��ҿ� �پ��� ũ���� ������ ���� ����

*/

#include <iostream>
using namespace std;

union ShareData {

	unsigned char a;
	unsigned short b;
	unsigned int c;
};


int study_union() {

	ShareData var;
	var.c = 0x12345678;

	cout << "hex : " << hex << endl;
	cout << "char : " << var.a << endl;
	cout << "short : " << var.b << endl;
	cout << "int : " << var.c;

	return 0;

}
