#include <iostream>
#include <iomanip>
using namespace std;

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

