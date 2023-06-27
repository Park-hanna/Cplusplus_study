/*
함수 호출시 여러개의 인수는 전달 가능,
 반환시는 1개 값만 가능

c++에서는 함수 반환값으로 배열을 제외한 모든 타입을 사용할 수 있음
하지만, 구조체나 객체에 포함된 배열은 반환할 수 있음

함수 원형 선언 : c++ 함수 정의시 순서가 매우 중요함
	원형 선언 후 메인 함수 선언 그 후 함수 선언

인수 전달 방법 :
 1. 값에 의한 전달 : 인수로 전달되는 변수가 가지고 있는 값을 함수 내의 매개변수에 복사하는 방식
			복사된 값으로 초기화된 매개변수는 인수로 전달된 변수와는 완전 별개 변수
			따라서 함수 내에서 매개변수 조작은 인수로 전달되는 변수에 아무런 영향 없음

 2. 참조에 의한 전달 : 인수로 전달된 변수의 값을 복사가 아닌 원본 데이터를 직접 전달하는 방식
			C에서는 포인터를 사용해 인수로 전달된 변수의 주소값을 전달 
			하지만 c++에서는 이런 작음을 참조자를 사용해 전달

main() 함수의 인수 전달 : 프로그램 실행시 가장 먼저 자동 호출되는 함수
	

재귀 호출(recursive call) : 함수 내부에서 함수가 자기 자신을 또 호출하는 것
	자기가 자신을 계속 호출해 끝없이 반복될 것 따라서 함수 내에서 재귀 호출을 중단하도록
	조건이 변경될 명령문을 포함해야함 -> 무한 반복시 실행 직후 스택 오버플로우로 종료될 것 

함수 포인터 : 정의된 함수는 프로그램 실행될 때 모두 메인 메모리로 올라감
	이때 함수 이름은 메모리에 올라간 함수의 시작 주소를 가리키는 포인터 상수가 됨
	함수의 시작 주소를 가리키는 포인터 상수를 함수 포인터라 함 
	따라서 주소 값을 변경할 수 없는 포인터

포인터 타입은 함수의 반환값과 매개변수에 의해 결정됨
	즉, 함수의 원형을 알아야만 해당 함수에 맞는 함수 포인터를 만들 수 있음
	함수 원형 예제 : void Func(int,int);
	함수 포인터 예제 : void (*ptr_func)(int,int); 
		->연산자 우선순위 때문에 반드시 *ptr_func 부분을 괄호 {}로 둘러싸야 정상 동작할 것

함수 포인터 표기법 : 복잡한 원 예제 : double (*calc)(double, double) = NULL;
1. typedef 키워드 : typedef double (*CalcFunc)(double,double); 
					//함수 포인터에 CalcFunc 이라는 새로운 이름을 붙임 
					CalcFunc ptr_func = calc;

2. auto 키워드 : auto ptr_func = calc;
*/ 

#include <iostream>
using namespace std;

typedef double(*Arith)(double, double); //typedef 키워드 사용해 새로운 이름 선언

double Calculator2(double, double, Arith);

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double, double, double (*func)(double, double));

int study_func_pointer_1();
int study_func_pointer_2();

int main(void) {

	study_func_pointer_1();
	study_func_pointer_2();

}

int study_func_pointer_1() {

	double (*calc)(double, double) = NULL; // def function pointer
	double num1 = 3, num2 = 4, result = 0;
	char oper = '*';

	switch (oper) {

	case '+' :
		calc = Add;
		break;

	case '-':
		calc = Sub;
		break;

	case '*':
		calc = Mul;
		break;

	case '/':
		calc = Div;
		break;

	default:
		cout << "Only four arithmetic operations (+, -, *, /) are supported.";
		break;
	}	

	result = Calculator(num1, num2, calc);
	cout << "Four arithmetic operations result is " << result << "."<<endl;
	return 0;
}

int study_func_pointer_2() {

	Arith calc = NULL; //함수 포인터 선언
	double num1 = 4, num2 = 5, result = 0;
	char oper = '+';

	switch (oper) {

	case '+':
		calc = Add;
		break;

	case '-':
		calc = Sub;
		break;

	case '*':
		calc = Mul;
		break;

	case '/':
		calc = Div;
		break;

	default:
		cout << "Only four arithmetic operations (+, -, *, /) are supported.";
		break;
	}

	result = Calculator2(num1, num2, calc);
	cout << "Four arithmetic operations result is " << result << "." << endl;
	return 0;
}

double Add(double num1, double num2) { return num1 + num2; } 
double Sub(double num1, double num2) { return num1 - num2; }
double Mul(double num1, double num2) { return num1 * num2; }
double Div(double num1, double num2) { return num1 / num2; }
double Calculator(double num1, double num2, double (*func)(double, double)) { return func(num1, num2); }

double Calculator2(double num1, double num2, Arith func) { return func(num1, num2); }
