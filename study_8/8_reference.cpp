/*
������ - reference : Ư�� ������ �� �̸���� ����� �� ����
ũ�Ⱑ ū ����ü�� ���� �����͸� �Լ��� �μ��� �����ؾ��� ��� ���
Ŭ���� ���迡�� ���� ���

	int �����̸�;
	int& �������̸� = �����̸�; // ������ ����
�̶� & �����ڴ� �ּҿ����ڰ� �ƴ� Ÿ���� �ĺ��ϱ� ���� ����ϴ� �ĺ���
��, int&�� int�� ������ ���� ���� �ǹ�

���� ����
1. �������� Ÿ���� ����̵Ǵ� ������ Ÿ�԰� ��ġ�ؾ���
2. �����ڴ� ����� ���ÿ� �ʱ�ȭ�ž� ��
3. �����ڴ� �ѹ� �ʱ�ȭ�Ǹ�, �����ϴ� ��� ���� �Ұ�


*/

#include <iostream>
using namespace std;

struct Book {

	string title;
	string author;
	int price;

};

int study_reference();
int study_reference_in_function();
void Swap(int& x, int& y);

int study_reference_struct();

int study_reference_struct();
void Display(const Book&);


int study_reference() {

	int x = 10;
	int& y = x;

	cout << "X : " << x << ", Y : " << y << endl;
	y++;

	cout << "X : " << x << ", Y : " << y << endl;
	cout << "Address of X : " << &x << ", Address of Y : " << &y << endl;

	return 0;

}

/*
�Լ� �μ��μ� ����
-> �����ڴ� �ַ� �Լ��� �μ� ���޶� ���
�Լ��� �����ڸ� �μ��� ���޹�����, �����ڰ� �����ϰ� �ִ� ���� ������ ���� �Լ� ������
���� ����

�Ʒ��� ���� ������ ���� ������ ������ �Ӹ� �ƴ϶� �����͸� ����ص� ���� �������

�Լ� �μ��� ������ ��� ��� Ư¡
1. �Լ� ������ ���� ������ (*)�� ������� �����Ƿ�, �Լ� ������ �ڵ尡 ����ϰ� ������
2. �Լ��� ȣ���� ���� ���� ���� ����� ���� ���°��Ǿ� �ڵ� �б� ���� ����
 ���� ������ �Լ������� �����ϸ� ���� ���� ������ ����ϴ� ���� ����

���� ȣ���� �� �ʿ�� �����ں��� ������ ����� �� �������� �� ����
*/

int study_reference_in_function() {

	int num1 = 3, num2 = 7;
	cout << "The value of num1 before change is " << num1 << ", and the value of num2 is " << num2 << endl;

	Swap(num1, num2);
	cout << "The value of num1 after change is " << num1 << ", and the value of num2 is " << num2 << endl;

	return 0;

}

void Swap(int& x, int& y) {
	int temp;

	temp = x;
	x = y;
	y = temp;

}

/*
����ü ���� : ����� ���� Ÿ���� �ٷ궧 �����ϰ� ���
*/

int study_reference_struct(void) {

	Book web_book = { "HTML�� CSS", "ȫ�浿", 28000 };
	Display(web_book);
	return 0;
}

void Display(const Book& bk) {
	cout << "The title of the book " << bk.title << ", ";
	cout << "author is " << bk.author << " and ";
	cout << "the price is $" << bk.price << endl;
}
