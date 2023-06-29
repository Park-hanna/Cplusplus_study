#include <iostream>
using namespace std;

struct Prop {

	int savings;
	int loan;
};

int CalcProperty2(Prop* money);

int study_function_and_struct_2() {
	int hong_prop;
	Prop hong = { 100, 2 };
	hong_prop = CalcProperty2(&hong); // 구조체 주소 함수 인수로 전달

	cout << "Hong's wealth is $" << hong_prop << " in total, minus $" <<
		hong.savings << " and $" << hong.loan << " in loans." << endl;

	return 0;

}


int CalcProperty2(Prop* money) {

	money->savings = 100; //호출된 함수에서 원본 구조체 데이터 변경
	return (money->savings - money->loan);
}

