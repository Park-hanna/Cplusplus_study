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

int study_in_out();
int study_arithmetic(int age);
int study_type();
int study_decimal_point();

int main() {

	//int age = study_in_out();
	
	//study_arithmetic(age);

	study_type();
	study_decimal_point();
}

int study_in_out()
{
	int age;

	cout << "Typing your age : ";
	::cin >> age;

	cout << "You're age : " << age << " Right? \n" << endl;
	return age;
}


/*
���� ���� 1
	int num;
	num = 20

���� ���� 2
	int num1, num2;
	double num3 = 1.23, num4 = 4.56

literal constant : ����� �޸� ������ ����Ű�� �̸��� ����
	��� Ÿ�Կ� ���� ����
	������ -> 123, -456 
		default  : signed int
		u(U) : unsugned int
		l(L) : signed long
		ul(uL, UL, Ul) : unsigned long
		longlong(ull, Ull, uLL, ULL) : unsigned long long
	�Ǽ��� -> 3.14, -3.14
		f(F) : float
		default : double
		l(L) : long double
	������ -> 'a'
	pointer -> nullptr 
		: nullptr Ű���� ����� ������ Ÿ��, ���������� ��ȯ �Ұ�
		0 ����� ��� ���� ���� nullptr == 0 (true) ��ȯ
	���� ���ͷ� ��� -> auto a = 0B010111;
		: 0B �Ǵ� 0b ���λ� ����� 0, 1 sq������ ǥ��

symbolic constant : ����� ���ÿ� �ʱ�ȭ�ؾ���
	const int ages = 30;

*/

int study_arithmetic(int age) {

	cout << "number 10 = Decimal " << age << " , " << endl;
	cout << oct;
	cout << "number 10 = Octal " << age << " and, " << endl;
	cout << hex;
	cout << "number 10 = Hexadecimal " << age << " Number Trnasform Done! \n" << endl;

	return 0;
}


/*
data type

������ : short, unsigned short, int, unsigned int, long, unsigned long, unsigned long long
unsigned : ���� ���� ǥ�� ���� ������ 0�� ������ ���� ������ 2��� ���� ǥ���� �� ����

�Ǽ��� : float(�Ҽ��� 6�ڸ�), double(�Ҽ��� 15�ڸ�), long double

������ : char, unsigned char

bool�� : true(!=0), false(==0)

auto keyword �̿� ���� : ���� �ʱ�ȭ�� Ư�� Ÿ�� ��� ��� ��밡�� 
	����ϸ� �ʱⰪ�� ���� Ÿ���� �ڵ� ����ǵ��� ���� 
	����, ������ ������ ������ �����ϰ� ���� ����
*/

int study_type() {

	int num = 2147483647;
	cout << "Integer Type\n";

	cout << "Saving parameter num value : " << num << endl;

	num = 2147483648;
	cout << "Saving parameter num value : " << num << endl;

	return 0;
}	

int study_decimal_point() {

	auto num01 = 3.1415926535897932; //float type : ��ȿ �ڸ����� �Ҽ��� 6�ڸ�

	cout << "\nReal Number Type\n";
	cout << "Saving parameter num value : " << num01 << " " << endl;
	
	auto num02 = 3.1415926535897932f; // double type : ��ȿ �ڸ����� �Ҽ��� 15�ڸ�
	cout << "Saving parameter num value : " << num02 << " " << endl;

	return 0;
}
