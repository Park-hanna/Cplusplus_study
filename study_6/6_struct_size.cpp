#include <iostream>
using namespace std;


struct TypeSize {
	char a;
	int b;
	double c;
};

/*
��ø�� ����ü : ����ü ���ǽ� ��� ������ �� �ٸ� ����ü ���� ����
����ü ũ�� : ��� ���� ũ�⿡ ���� ���� ������ ����ü ũ�Ⱑ �׻� ����������� ���հ� ��ġ���� ����

����ü�� �޸𸮿� �Ҵ��� ��� �����Ϸ��� ���α׷� �ӵ� ����� ���� ����Ʈ �е� ��Ģ ���
	 ����Ʈ �е� : �����Ϸ��� ��� ������ ���� �ϱ� ���ؼ� ũ�Ⱑ ���� ū ��� ������ �������� ��� ���������
				�޸� ũ�⸦ ���� , �̶� �߰��Ǵ� ����Ʈ�� �е� ����Ʈ�� ��
*/

int study_struct_size() {
	cout << "The size of each member of the structure Type Size is : " << endl;
	cout << sizeof(char) << " , " << sizeof(int) << " , " << sizeof(double) << endl;

	cout << "The size of the struct Type Size is : " << endl;
	cout << sizeof(TypeSize);
	return 0;
}