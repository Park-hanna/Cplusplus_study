/*
�Լ� ȣ��� ���޵Ǵ� �μ� Ȥ�� �Լ� ����� ��ȯ�Ǵ� ��ȯ�����ε� ����ü ��� ����
�⺻ Ÿ�԰� ������ ���� ���, ����ü�� ����Ű�� ������, ����ü�� �� ����������� ����� �� ����
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

	hong_prop = CalcProperty(hong.savings, hong.loan); // ����ü ������� �Լ� �μ��� ����

	cout << "Hong's wealth is $" << hong_prop << " in total, minus $" <<
		hong.savings << " and $" << hong.loan << " in loans." << endl;

	return 0;

}

int CalcProperty(int s, int l) {
	return (s - l);
}