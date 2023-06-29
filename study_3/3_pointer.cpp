#include <iostream>
#include <iomanip>
using namespace std;

/*
Pointer : 가장 큰 목적 -> 런 타임시 이름 없는 메모리를 할당받아 pointer에 할당해
						할당 받은 메모리에 접근하기 위함

주소 연산자 : (&) -> 변수 이름 앞에 사용, 해당 변수 주소값 반환
참조 연산자 : (*) -> 포인터 이름, 주소 앞에 사용, 포인터에 저장된 주소에 저장된 값 반환


!!사용전 포인터 반드시 초기화
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