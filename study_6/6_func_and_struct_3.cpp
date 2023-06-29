#include <iostream>
using namespace std;

struct Prop {

	int savings;
	int loan;
};

Prop InitProperty(void);
int CalcProperty3(const Prop* money);


int study_function_and_struct_3() {

	int hong_prop;
	Prop hong = InitProperty();
	hong_prop = CalcProperty3(&hong); // 구조체의 멤버변수를 함수의 인수로 전달

	cout << "Hong's wealth is $" << hong_prop << " in total, minus $" <<
		hong.savings << " and $" << hong.loan << " in loans." << endl;

	return 0;
}

Prop InitProperty(void) {
	Prop hong_prop = { 100, 3 };
	return hong_prop; // 구조체를 함수의 반환값으로 반환
}

//const 키워드 사용해 구조체의 데이터 직접 수정하는 것 방지
int CalcProperty3(const Prop* money) {

	return (money->savings - money->loan);
}