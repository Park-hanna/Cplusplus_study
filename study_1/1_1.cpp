/*
namespace -> 이름이 기억되는 영역 (이름이 소속된 공간으로 이름 충돌 방지)
표준 구성 요소(class, function, parameter...) 등 std 공간에 저장되어 있음
std 정의 사용시 std:: 접두어를 붙임
	using namespace std; //이러면 std에 속한 정의들은 namespace이름 안붙여도 됨

cout -> 미리 정의 된 출력 stream object
	std :: cout << output data;
cin -> 미리 정의 된 입력 stream object
	std :: cin >> save data;
이때, cin은 오른쪽에 입력한 변수의 타입과 동일하게 변환
*/

#include <iostream>
using namespace std;

int study_in_out();
int study_arithmetic(int age);
int study_type();
int study_decimal_point();

int main() {

	//int age = study_in_out();
	
	//study_arithmetic(age);

	study_type();
	study_decimal_point();
}

int study_in_out()
{
	int age;

	cout << "Typing your age : ";
	::cin >> age;

	cout << "You're age : " << age << " Right? \n" << endl;
	return age;
}


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

int study_arithmetic(int age) {

	cout << "number 10 = Decimal " << age << " , " << endl;
	cout << oct;
	cout << "number 10 = Octal " << age << " and, " << endl;
	cout << hex;
	cout << "number 10 = Hexadecimal " << age << " Number Trnasform Done! \n" << endl;

	return 0;
}


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
