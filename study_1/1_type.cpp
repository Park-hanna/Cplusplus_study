/*
data type

������ : short, unsigned short, int, unsigned int, long, unsigned long, unsigned long long
unsigned : ���� ���� ǥ�� ���� ������ 0�� ������ ���� ������ 2��� ���� ǥ���� �� ����

�Ǽ��� : float(�Ҽ��� 6�ڸ�), double(�Ҽ��� 15�ڸ�), long double

������ : char, unsigned char

bool�� : true(!=0), false(==0)

auto keyword �̿� ���� : ���� �ʱ�ȭ�� Ư�� Ÿ�� ��� ��� ��밡��
	����ϸ� �ʱⰪ�� ���� Ÿ���� �ڵ� ����ǵ��� ����
	����, ������ ������ ������ �����ϰ� ���� ����
*/


#include <iostream>
using namespace std;

int study_type() {

	int num = 2147483647;
	cout << "Integer Type\n";

	cout << "Saving parameter num value : " << num << endl;

	num = 2147483648;
	cout << "Saving parameter num value : " << num << endl;

	return 0;
}

int study_decimal_point() {

	auto num01 = 3.1415926535897932; //float type : ��ȿ �ڸ����� �Ҽ��� 6�ڸ�

	cout << "\nReal Number Type\n";
	cout << "Saving parameter num value : " << num01 << " " << endl;

	auto num02 = 3.1415926535897932f; // double type : ��ȿ �ڸ����� �Ҽ��� 15�ڸ�
	cout << "Saving parameter num value : " << num02 << " " << endl;

	return 0;
}
