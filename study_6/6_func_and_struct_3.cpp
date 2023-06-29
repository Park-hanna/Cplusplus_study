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
	hong_prop = CalcProperty3(&hong); // ����ü�� ��������� �Լ��� �μ��� ����

	cout << "Hong's wealth is $" << hong_prop << " in total, minus $" <<
		hong.savings << " and $" << hong.loan << " in loans." << endl;

	return 0;
}

Prop InitProperty(void) {
	Prop hong_prop = { 100, 3 };
	return hong_prop; // ����ü�� �Լ��� ��ȯ������ ��ȯ
}

//const Ű���� ����� ����ü�� ������ ���� �����ϴ� �� ����
int CalcProperty3(const Prop* money) {

	return (money->savings - money->loan);
}