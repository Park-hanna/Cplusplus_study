/*
inline function : 일반적인 함수의 호출과정을 거치지 않고 함수의 모든 코드를 호출된
자리에 바로 삽입하는 방식
함수 호출에 걸리는 시간은 절약되나 함수 호출 과정으로 생기는 여러 이점을 포기하게 됨
따라서 코드가 매우 적은 함수만을 인라인 함수로 선언하는 것이 좋음

함수 호출은 시간이 걸림 이때 오래걸리는 것보다 실행 시간이 
매우 짧은 점이 부담될 수 있음
이런경우에 인라인함수 제공

inline 함수 원형 or inline 함수 정의

*/

#include <iostream>
#include <stdio.h>

using namespace std;

inline int Sub(int x, int y) {
	return x - y;
}

inline void Print(int x) {
	cout << "Operate result : " << x << endl;
}


int study_inline_func() {

	int num1 = 5, num2 = 3;
	int result;

	result = Sub(num1, num2);
	Print(result);

	return 0;

}

int study_inline_func_2() {

	int num1 = 5, num2 = 3;
	int result;

	{
		int x = num1, y = num2;
		result = x - y;
	}

	{
		int x = result;
		cout << "Operate result : " << x << endl;
	}

	return 0;
}

/*
매크로 함수는 일반 함수와 다르게 단순 치환만 해줌, 일반 함수와 같은 방식으로 동작안함
따라서 매크로 함수를 일반 함수처럼 사용하려면 모든 인수를 괄호 {}로 감싸야함
*/

inline int Sqr(int x) {
	return x * x;
}

int study_macro_func(void) {

	int result;
	int x = 5;

	cout << "Operate Result : " << Sqr(10) << endl;
	cout << "Operate Result : " << Sqr(x) << endl;
	cout << "Operate Result : " << Sqr(x+3) << endl;


	return 0;
}