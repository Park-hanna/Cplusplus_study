/*
default argument : �⺻���� �̸� ���ǵǾ� �ִ� �μ�
�Լ� ȣ��� �μ��� �������� ������, �Լ��� �ڵ����� �̸� ���ǵǾ� �ִ� ����Ʈ
�μ��� ��� �翬�� �μ� ������ �Լ� ȣ���ϸ�, ���޵� �μ������� �Լ� ȣ�� 

�Ѹ���� ����Ʈ�μ��� �μ��� ������ �ٸ����� ���� �Լ��� ȣ���ϴ� ��

�Լ��� �������� ��������
���� �����ʺ��� ������ ������θ� ���� ����
��� �μ��鸸 ������ ����Ʈ �μ� ���� �Ұ�

�Լ��� ���޵� �μ��� ���ʺ��� ������� �Ű����� ��Ͽ� ���Ե�
���� ����Ʈ �μ��� ������ �Լ��� ȣ���� ��, �μ��� ������ �ǳʶ� �� ����
*/

#include <iostream>
using namespace std;

double Multi(double, double = 2);

int study_defualt_arg() {

	cout << Multi(3) << endl;
	cout << Multi(3, 3) << endl;
	cout << Multi(3, 4) << endl;

	return 0;
}

double Multi(double x, double n) {

	double result = x;

	for (int i = 1; i < n; i++) {
		result *= x;
	}

	return result;
}
