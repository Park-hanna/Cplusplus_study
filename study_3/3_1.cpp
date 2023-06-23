#include <iostream>
#include <iomanip>
using namespace std;

int study_array();
int study_pointer();
int study_pointer_opertor();

int main() {

	study_array();
	study_pointer();
	study_pointer_opertor();
}

/*
2���� �迭 ���� ���ϱ�

setw() : #include<iomanip>�� ���Ե� �Լ�
	����ϴ� �������� ĭ�� ������ �� ��ŭ ���� ������
	�ѹ��� �ϳ��� �����ϸ� ���տ� setw(int num) => num ��ŭ�� �ڸ� Ȯ�� �� ��� 
		�׿� �Լ� setfill()dms => ������ ��ĭ�� ����ڰ� ������ �� �ִ� �Լ�
				 setbase => ���� ���� �Լ�
				 setprecision() => �Ǽ� �ڷ����� ��ȿ���� ���� �Լ�
*/ 

int study_array() {

	int arr_col_len, arr_row_len;
	int arr[3][4] = {
		{10,20},
		{30,40,50,60},
		{0,0,70,80}
	};

	arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]); // 2���� �迭�� �� ���� ���
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]); // 2���� �迭 �� ���� ���

	cout << "<About nshape Array>" << endl;
	cout << "arr array element values : " << endl;
	for (int i = 0; i < arr_row_len; i++) {
		for (int j = 0; j < arr_col_len; j++) 
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}

	cout << "\narr array col size : " << arr_col_len << endl;
	cout << "arr array row size : " << arr_row_len << endl;

	return 0;
}


// pointer ����
int study_pointer() {

	int x = 7;
	int *ptr = &x;
	int **pptr = &ptr;

	cout << "\n<About Pointer>" << endl;
	cout << "x = " << x << endl;
	cout << "x ptr : " << ptr << endl;
	cout << "x pptr : " << pptr << endl;

	cout << "\nOther example\n";

	int num1 = 1234;
	double num2 = 3.14;

	int *ptr_num1 = &num1;
	double *ptr_num2 = &num2;

	cout << "pointer size : " << sizeof(ptr_num1) << endl;
	cout << "The address value pointed to by the pointer ptr_num1 is " << ptr_num1 << endl;
	cout << "The value stored at the address pointed to by the pointer ptr_num1 is " << *ptr_num1 << endl;
	cout << "The address value pointed to by the pointer ptr_num2 is " << ptr_num2 << endl;
	cout << "The value stored at the address pointed to by the pointer ptr_num2 is " << *ptr_num2 << endl;

	return 0;
}

/*
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