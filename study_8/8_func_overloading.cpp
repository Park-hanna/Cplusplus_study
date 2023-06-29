/*
function overloading : 같은 이름의 함수를 중복해 정의하는 것

여러함수를 하나의 이름으로 연결해줌
즉, 함수 오버로딩이란 같은 일을 처리하는 함수를 매개변수의 형식을 조금 바꿔
하나의 이름으로 작성할 수 있게 해주는 것
	객체 지향 프로그래밍의 특징 중 다형성 구현임

function signature : 함수의 원형에 명시되는 매개변수 리스트

만약 두 함수가 매개변수의 개수, 그 타입이 모두 같다면, 이 두 함수의 시그니처가 같다고 함
즉, 함수 오버로딩은 서로 다른 시그니처를 갖는 여러 함수를 같은 이름으로 정의하는 것

함수의 원형 예제
1. void Display(const char* str, int n);             // 문자열 str을 n번 출력함.
2. void Display(const char* str1, const char* str2); // 문자열 str1과 str2를 연달아 출력함.
3. void Display(int x, int y);                       // x * y를 출력함.
4. void Display(double x, double y);                 // x / y를 출력함.

Display() 함수를 호출하면 자동으로 같은 시그니처를 가진 함수 원형 찾아 호출

함수의 호출 예제
1. Display("C++", 3);              // 1번 Display() 함수 호출 -> "C++C++C++"
2. Display("C++", " Programming"); // 2번 Display() 함수 호출 -> "C++ Programming"
3. Display(3, 4);                  // 3번 Display() 함수 호출 -> 12
4. Display(4.2, 2.1);              // 4번 Display() 함수 호출 -> 2
5. Display(4.2, 3);                // 3번과 4번 모두 호출 가능 -> 컴파일 오류가 발생함.

5번의 경우 모호한 호출이됨 따라서 모호한 호출은 허용하지 않아 오류 발생
*/

#include <iostream>
using namespace std;

int add(int, int, int);
double add(double, double);

int study_func_overloading(void) {
	
	cout << "int function add = " << add(1, 2, 3) << endl;
	cout << "double function add = " << add(4.5, 6.2) << endl;

	return 0;

}

int add(int a, int b, int c) {
	return a + b + c;
}

double add(double x, double y) {
	return x + y;
}
