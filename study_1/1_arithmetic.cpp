/*
변수 선언 1
	int num;
	num = 20

변수 선언 2
	int num1, num2;
	double num3 = 1.23, num4 = 4.56

literal constant : 저장된 메모리 공간을 가리키는 이름이 없음
	상수 타입에 따라 구분
	정수형 -> 123, -456
		default  : signed int
		u(U) : unsugned int
		l(L) : signed long
		ul(uL, UL, Ul) : unsigned long
		longlong(ull, Ull, uLL, ULL) : unsigned long long
	실수형 -> 3.14, -3.14
		f(F) : float
		default : double
		l(L) : long double
	문자형 -> 'a'
	pointer -> nullptr
		: nullptr 키워드 사용한 포인터 타입, 정수형으로 변환 불가
		0 사용해 명시 가능 따라서 nullptr == 0 (true) 반환
	이진 리터럴 상수 -> auto a = 0B010111;
		: 0B 또는 0b 접두사 사용해 0, 1 sq가지고 표현

symbolic constant : 선언과 동시에 초기화해야함
	const int ages = 30;

*/

#include <iostream>
using namespace std;

int study_arithmetic(int age) {

	cout << "number 10 = Decimal " << age << " , " << endl;
	cout << oct;
	cout << "number 10 = Octal " << age << " and, " << endl;
	cout << hex;
	cout << "number 10 = Hexadecimal " << age << " Number Trnasform Done! \n" << endl;

	return 0;
}

