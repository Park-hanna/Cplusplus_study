
#include <iostream>
using namespace std;

int study_floating_point_error();
int study_type_conversion_1();
int study_type_conversion_2();

int main() {

	//study_floating_point_error();
	cout << "\n";
	study_type_conversion_1();
	cout << "\n";
	study_type_conversion_2();
	cout << "\n";

}


// 부동 소수 점 방식으로 실수 표현시 발생할 수 있는 오차 예제
int study_floating_point_error() {

	int i;
	float sum = 0;

	for (i = 0; i < 1000; i++) {
		sum += 0.1;
	}

	cout << "The sum of 0.1 added 1000 times is " << sum << endl;

	return 0;
}


/*
타입 변환 예제
1. 묵시적 타입 변환 -> 자동 타입 변환 : 
	대입 연산, 산술 연산에서 컴파일러가 자동으로 수행
	대입 연산시 연산자의 오른쪽 데이터 타입이 왼쪽 데이터 타입으로 변환 진행
	산술 연산시 데이터 손실 최소화 방향으로 진행
		아래와 같은 순으로 자동 타입 변환
		char -> short -> int -> long -> float -> double -> long double

2. 명시적 타입 변환 -> 강제 타입 변환 :
	사용자가 타입 cast == () 연산자를 사용해 강제적으로 수행 변환
	1) (변환할 타입) 변환할 데이터 // C, C++ 에서 가능
	2) 변환할 타입 (변환할 데이터) // C++ 에서만 가능
*/ 

int study_type_conversion_1() {

	// 대입 연산시 묵시적 타입 변환
	int num1 = 3.1415;
	int num2 = 8.3E12;
	double num3 = 5;

	cout << "대입 연산시 묵시적 타입 변환" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;

	cout << "\n산술 연산시 묵시적 타입 변환" << endl;
	// 산술 연산시 묵시적 타입 변환
	double result1 = 5 + 3.14;
	double result2 = 5.0f + 3.14;

	cout << "result1 = " << result1 << endl;
	cout << "result2 = " << result2 << endl;	

	return 0;
}

int study_type_conversion_2() {

	// 명시적 타입 변환 
	int num1 = 1;
	int num2 = 4;

	double result1 = num1 / num2;
	double result2 = (double)num1 / num2;
	double result3 = double(num1) / num2;

	cout << "명시적 타입 변환 " << endl;
	cout << "result 1 = " << result1 << endl;
	cout << "result 2 = " << result2 << endl;
	cout << "result 3 = " << result3;

	return 0;
}

/* 
Operator (C++ 에서 추가된 operator)

1. 범위 지정 연산자 (scope resolution operator) (::)
	c++ 에서 우선순위 최상
	여러 범위에서 사용된 식별자를 식별, 구분하는데 사용 (식별자로 변수, 함수, 열거체가 올 수 있음)
	변수의 이름 앞에 붙이면 해당 변수는 전역으로 사용하라는 의미
	클래스에 사용시 namespace 멤버를 식별하거나, 클래스의 정적 멤버 호출 가능
		1) ::식별자					2) 클래스이름::식별자		
		3) 네임스페이스::식별자		4) 열거체::식별자		

2. 멤버 포인터 연산자 (pointer-to-member operator) (.* or ->*)
	해당 연산자를 사용해 클래스 멤버를 가리키는 포인터를 정의 할 수 있음
	1) 왼쪽의 피연사자가 클래스 타입 객체인 경우 : .*
		classTypeObject.*memberName
	2) 왼쪽의 피연사자가 클래그 타입의 객체를 가리키는 포인터인 경우 : ->*
		classTypeObjectPointer->*memberName

3. typeid operator
	해당 연산자를 사용해 객체의 타입 정보 확인 가능
	런타임시 객체의 타입 결정할때 사용함
	템플릿에서 템플릿 매개변수의 타입을 결정할 때도 사용

	typeid(표현식)
*/