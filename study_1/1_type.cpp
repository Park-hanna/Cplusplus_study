/*
data type

정수형 : short, unsigned short, int, unsigned int, long, unsigned long, unsigned long long
unsigned : 음의 정수 표현 못함 하지만 0을 포한한 양의 정수를 2배더 많이 표현할 수 있음

실수형 : float(소수점 6자리), double(소수점 15자리), long double

문자형 : char, unsigned char

bool형 : true(!=0), false(==0)

auto keyword 이용 선언 : 변수 초기화시 특정 타입 명시 대신 사용가능
	사용하면 초기값에 맞춰 타입이 자동 선언되도록 설정
	따라서, 복잡한 형식의 변수를 간단하게 선언 가능
*/


#include <iostream>
using namespace std;

int study_type() {

	int num = 2147483647;
	cout << "Integer Type\n";

	cout << "Saving parameter num value : " << num << endl;

	num = 2147483648;
	cout << "Saving parameter num value : " << num << endl;

	return 0;
}

int study_decimal_point() {

	auto num01 = 3.1415926535897932; //float type : 유효 자릿수는 소수점 6자리

	cout << "\nReal Number Type\n";
	cout << "Saving parameter num value : " << num01 << " " << endl;

	auto num02 = 3.1415926535897932f; // double type : 유효 자릿수는 소수점 15자리
	cout << "Saving parameter num value : " << num02 << " " << endl;

	return 0;
}
