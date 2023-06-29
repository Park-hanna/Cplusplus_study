#include <iostream>
#include <string>
using namespace std;

/*
string == character set
NULL => ������ �迭�� ����� ���ڿ� ������ ���� ���� �˷�����
		�׷��� ���� ���ڿ��� ���� ���� �� ���� �����Ⱚ ���� ����
		���� ���ڿ��� ���� �����Ͱ� ������ '\0' ǥ��
	null ���� ������ ������ ������ �迭�� ���� ���ڿ� ����

2���� ǥ�� ���
1) C��� �� : "" ���
2) string class ���

char�� ũ�� ������ �Է��� ���� ��� ����� ������
 1. ���Ⱑ ���� �� ���� �Է��� �� �� ����
 -> cin ��ü�� ����, �� ����, ĳ���� ���� ���� �� ��� ���ڿ� ������ �ν�
  ���� ���� ���θ� �Է¹������� cin ��ü�� get() �޼ҵ带 ����ؼ� ����

 2. ũ�� �̻� �Է� �Ұ��� ���α׷� ���� ���� ��
 -> cin ��ü�� ignore() �޼ҵ� ����� ����
  �̶� �־��� ũ�� �̻� �Է��ص� ũ�⸸ŭ�� �Է��� ����
*/

int study_string_1() {

	const int SIZE = 20;
	char address1[SIZE];
	char name1[SIZE];

	char address2[SIZE];
	char name2[SIZE];

	cout << "<About string>\n";

	cout << "1st Example\n";

	cout << "Input your name : ";
	cin.get(name1, SIZE).get();
	cout << "Input your city : ";
	cin.get(address1, SIZE).get();
	cout << name1 << " || " << address1 << endl;

	cout << "\n2nd Example\n";
	
	cout << "Input your name : ";
	cin.get(name2, SIZE).ignore(SIZE, '\n');
	cout << "Input your city : ";
	cin.get(address2, SIZE).ignore(SIZE, '\n');
	cout << name2 << " || " << address2 << endl;

	return 0;
}

int study_string_2() {

	string address, name;

	cout << "\n<Using String Class>" << endl;
	cout << "Input your name : ";
	getline(cin, name);

	cout << "Input yout city : ";
	getline(cin, address);
	cout << name << " || " << address << endl;

	return 0;
}