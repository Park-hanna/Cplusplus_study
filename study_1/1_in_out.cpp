/*
namespace -> �̸��� ���Ǵ� ���� (�̸��� �Ҽӵ� �������� �̸� �浹 ����)
ǥ�� ���� ���(class, function, parameter...) �� std ������ ����Ǿ� ����
std ���� ���� std:: ���ξ ����
	using namespace std; //�̷��� std�� ���� ���ǵ��� namespace�̸� �Ⱥٿ��� ��

cout -> �̸� ���� �� ��� stream object
	std :: cout << output data;
cin -> �̸� ���� �� �Է� stream object
	std :: cin >> save data;
�̶�, cin�� �����ʿ� �Է��� ������ Ÿ�԰� �����ϰ� ��ȯ
*/

#include <iostream>
using namespace std;

int study_in_out()
{
	int age;

	cout << "Typing your age : ";
	::cin >> age;

	cout << "You're age : " << age << " Right? \n" << endl;
	return age;
}