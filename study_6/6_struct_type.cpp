/*
����ü : ����ڰ� �⺻ Ÿ���� �̿��� ���Ӱ� ������ �� �ִ� ����� ���� Ÿ��
	���� ���� : ����ü�� ���(�������) -> �Լ��� ��� ������ ���� �� ����

	struct ����ü �̸� {
		�������1Ÿ�� �������1�̸�;
	};

	����
	struct ����ü�̸� ����ü�����̸�;

	���� ��� :
		����ü�����̸�.��������̸�

	����ü ���� �ʱ�ȭ :
		����ü�����̸� = {�������1���ʱⰪ, �������2���ʱⰪ,...};

*/
#include <iostream>
using namespace std;

struct book{

	string title;
	string author;
	int price;
};

int study_struct_type() {

	book web_book = { "HtML�� CSS", "ȫ�浿", 28000 };
	book java_book = { "JAVA Language", "�̼���" };

	cout << "First book name is " << web_book.title << " , that author is "
		<< web_book.author << " and the book price is  " << web_book.price << " dollars.\n" << endl;

	cout << "Second book name is " << java_book.title << " , that author is "
		<< java_book.author << " and the book price is  " << java_book.price << " dollars." << endl;

	return 0;
}



