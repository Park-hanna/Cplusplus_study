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
	hong_prop = CalcProperty2(&hong); // ����ü �ּ� �Լ� �μ��� ����

	cout << "Hong's wealth is $" << hong_prop << " in total, minus $" <<
		hong.savings << " and $" << hong.loan << " in loans." << endl;

	return 0;

}


int CalcProperty2(Prop* money) {

	money->savings = 100; //ȣ��� �Լ����� ���� ����ü ������ ����
	return (money->savings - money->loan);
}

