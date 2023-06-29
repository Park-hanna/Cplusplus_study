#include <iostream>
#include <iomanip>
using namespace std;

/*
Pointer : ���� ū ���� -> �� Ÿ�ӽ� �̸� ���� �޸𸮸� �Ҵ�޾� pointer�� �Ҵ���
						�Ҵ� ���� �޸𸮿� �����ϱ� ����

�ּ� ������ : (&) -> ���� �̸� �տ� ���, �ش� ���� �ּҰ� ��ȯ
���� ������ : (*) -> ������ �̸�, �ּ� �տ� ���, �����Ϳ� ����� �ּҿ� ����� �� ��ȯ


!!����� ������ �ݵ�� �ʱ�ȭ
*/
int study_pointer() {

	int x = 7;
	int* ptr = &x;
	int** pptr = &ptr;

	cout << "\n<About Pointer>" << endl;
	cout << "x = " << x << endl;
	cout << "x ptr : " << ptr << endl;
	cout << "x pptr : " << pptr << endl;

	cout << "\nOther example\n";

	int num1 = 1234;
	double num2 = 3.14;

	int* ptr_num1 = &num1;
	double* ptr_num2 = &num2;

	cout << "pointer size : " << sizeof(ptr_num1) << endl;
	cout << "The address value pointed to by the pointer ptr_num1 is " << ptr_num1 << endl;
	cout << "The value stored at the address pointed to by the pointer ptr_num1 is " << *ptr_num1 << endl;
	cout << "The address value pointed to by the pointer ptr_num2 is " << ptr_num2 << endl;
	cout << "The value stored at the address pointed to by the pointer ptr_num2 is " << *ptr_num2 << endl;

	return 0;
}

/*
�����ʹ� ���� ���� ���� ���ѵ� ���길 ����

�����ͳ��� +, *, / �� �ƹ� �ǹ� ����
		  - �� �� ������ ������ ����� �Ÿ��� ��Ÿ��
		  ������ +, - ���� ������ �Ǽ��ʹ� �Ұ���
		  �����ϰų� �� ����

������-�迭�� ���� ��ü�� ������
 �� �迭 �̸��� �ּҷ� �ؼ�, �ش� �迭�� ù ��° ����� �ּҿ� ����
 ������ �迭 ũ�� ���� ū ���̰� �߻�

pointer operator exmaple

arr[n] == *(arr+n)
*/

int study_pointer_opertor() {

	int arr[3] = { 10, 20, 30 };
	int* ptr_arr = arr;

	cout << "\n<Pointer and Array Relation>" << endl;
	cout << "Access an array element using the array name : " << arr[0] << " , " << arr[1] << " , " << arr[2] << endl;
	cout << "Access an array element using the pointer : " << ptr_arr[0] << " , " << ptr_arr[1] << " , " << ptr_arr[2] << endl;
	cout << "Operate an array size using the array name : " << sizeof(arr) << endl;
	cout << "Operate an array size using the pointer : " << sizeof(ptr_arr) << endl;

	cout << "\n<Pointer Operate>" << endl;
	cout << "Access an array element by pointer arithmetic by its name : " << *(arr + 0) << " , " << *(arr + 1) << " , " << *(arr + 2);

	return 0;
}