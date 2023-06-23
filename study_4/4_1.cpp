#include <iostream>
using namespace std;

/*
Memory Dynamic Allocation : ��Ÿ�ӿ� �޸� �Ҵ�޴� ��
	c ���� malloc() -> �Ҵ� , free() -> ��ȯ
	c++ ���� �Ҵ� �� ������ ���� new ������, delete ������ ����

1) new ������ : 
	Ÿ��* �������̸� = new Ÿ��;
		ù��° Ÿ�� => �����Ϳ� �´� ������ ������ ����
		�ι�° Ÿ�� => �޸� ���� ������ ����. 
			����, ��밡�� �޸𸮰� ������ ���ο� �޸� ������� nullpointer ��ȯ
	���� ��� ���� (free store) �Ҹ��� �޸� ������ ��ü�� ���� �޸� �Ҵ����
	�Ҵ���� �޸𸮴� �̸��� ���� ���� �ش� �����ͷθ� ���� ����

2) delete ������ : �� ������� �ʴ� �޸� �ٽ� �޸� ������ ��ȯ
	delete �������̸�;
	
�̶�, new �����ڷ� ������ ������ �ƴϸ� delete �����ڷ� ���� �Ұ�
	�� �� ������ �޸� ������ �õ��� ���� �߻�	
*/

int study_dynamic_allocation();

int main() {

	study_dynamic_allocation();
}

int study_dynamic_allocation() {

	int* ptr_int = new int;
	*ptr_int = 100;

	double* ptr_double = new double;
	*ptr_double = 100.123;

	cout << "<About Dynamic Allocation with new and delete>" << endl;
	cout << "Int Type Value : " << *ptr_int << endl;
	cout << "Int Type Memory Address : " << ptr_int << endl;
	cout << "Double Type Value : " << *ptr_double << endl;
	cout << "Double Type Memory Address : " << ptr_double << endl;

	delete ptr_int;
	delete ptr_double;

	return 0;

}