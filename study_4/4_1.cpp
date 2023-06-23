#include <iostream>
using namespace std;

/*
Memory Dynamic Allocation : 런타임에 메모리 할당받는 것
	c 언어에는 malloc() -> 할당 , free() -> 반환
	c++ 에는 할당 및 해제를 위해 new 연산자, delete 연산자 제공

1) new 연산자 : 
	타입* 포인터이름 = new 타입;
		첫번째 타입 => 데이터에 맞는 포인터 선언을 위함
		두번째 타입 => 메모리 종류 지정을 위함. 
			만약, 사용가능 메모리가 부족해 새로운 메모리 못만들시 nullpointer 반환
	자유 기억 공간 (free store) 불리는 메모리 공간에 객체를 위한 메모리 할당받음
	할당받은 메모리는 이름이 없음 따라서 해당 포인터로만 접근 가능

2) delete 연산자 : 더 사용하지 않는 메모리 다시 메모리 공간에 반환
	delete 포인터이름;
	
이때, new 연산자로 생성한 변수가 아니면 delete 연산자로 해제 불가
	한 번 해제한 메모리 재해제 시도시 오류 발생	
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