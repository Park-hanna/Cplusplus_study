/*
함수 호출시 전달되는 인수 혹은 함수 종료시 반환되는 반환값으로도 구조체 사용 가능
기본 타입과 완전히 같은 방식, 구조체를 가리키는 포인터, 구조체의 한 멤버변수만을 사용할 수 있음
*/

#include <iostream>
using namespace std;

struct Prop {

	int savings;
	int loan;
};

int CalcProperty(int s, int l);

int study_function_and_struct() {

	int hong_prop;
	Prop hong = { 100, 1 };

	hong_prop = CalcProperty(hong.savings, hong.loan); // 구조체 멤버변수 함수 인수로 전달

	cout << "Hong's wealth is $" << hong_prop << " in total, minus $" <<
		hong.savings << " and $" << hong.loan << " in loans." << endl;

	return 0;

}

int CalcProperty(int s, int l) {
	return (s - l);
}