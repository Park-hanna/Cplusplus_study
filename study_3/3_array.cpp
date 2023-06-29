#include <iostream>
#include <iomanip>
using namespace std;

/*
2차원 배열 길이 구하기

setw() : #include<iomanip>에 포함된 함수
	출력하는 데이터의 칸을 지정한 수 만큼 정렬 시켜줌
	한번에 하나만 가능하며 대상앞에 setw(int num) => num 만큼의 자리 확보 후 출력 
		그외 함수 setfill()dms => 공백대신 빈칸을 사용자가 지정할 수 있는 함수
				 setbase => 진법 설정 함수
				 setprecision() => 실수 자료형에 유효숫자 설정 함수
*/ 

int study_array() {

	int arr_col_len, arr_row_len;
	int arr[3][4] = {
		{10,20},
		{30,40,50,60},
		{0,0,70,80}
	};

	arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]); // 2차원 배열의 열 길이 계산
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]); // 2차원 배열 행 길이 계산

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

