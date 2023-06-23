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


/*
Pointer : 가장 큰 목적 -> 런 타임시 이름 없는 메모리를 할당받아 pointer에 할당해
						할당 받은 메모리에 접근하기 위함

주소 연산자 : (&) -> 변수 이름 앞에 사용, 해당 변수 주소값 반환
참조 연산자 : (*) -> 포인터 이름, 주소 앞에 사용, 포인터에 저장된 주소에 저장된 값 반환


!!사용전 포인터 반드시 초기화
*/
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
포인터는 값을 증감 등의 제한된 연산만 가능

포인터끼리 +, *, / 는 아무 의미 없음
		  - 은 두 포인터 사이의 상대적 거리를 나타냄
		  정수를 +, - 가능 하지만 실수와는 불가능
		  대입하거나 비교 가능

포인터-배열은 서로 대체도 가능함
 즉 배열 이름을 주소로 해석, 해당 배열의 첫 번째 요소의 주소와 같음
 하지만 배열 크기 계산시 큰 차이가 발생 

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