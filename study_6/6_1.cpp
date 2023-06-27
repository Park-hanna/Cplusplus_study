/*
����ü : ����ڰ� �⺻ Ÿ���� �̿��� ���Ӱ� ������ �� �ִ� ����� ���� Ÿ��
	���� ���� : ����ü�� ���(�������) -> �Լ��� ��� ������ ���� �� ����

	struct ����ü �̸� {
		�������1Ÿ�� �������1�̸�;
	};

	����
	struct ����ü�̸� ����ü�����̸�;

	���� ��� :
		����ü�����̸�.��������̸�

	����ü ���� �ʱ�ȭ :
		����ü�����̸� = {�������1���ʱⰪ, �������2���ʱⰪ,...};

*/
#include <iostream>
using namespace std;

struct book{

	string title;
	string author;
	int price;
};

struct Prop {

	int savings;
	int loan;
};

struct TypeSize {
	char a;
	int b;
	double c;
};


union ShareData {

	unsigned char a;
	unsigned short b;
	unsigned int c;
};

enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

Prop InitProperty(void);

int study_struct_type();
int study_function_and_struct();
int study_function_and_struct_2();
int study_function_and_struct_3();

int study_enum();
int study_union();

int study_struct_size();

int CalcProperty(int, int);
int CalcProperty2(Prop*);
int CalcProperty3(const Prop*);

int main() {

	study_struct_type();
	study_function_and_struct();
	study_function_and_struct_2();
	study_function_and_struct_3();
	study_struct_size();
	study_union();
	study_enum();
}

int study_struct_type() {

	book web_book = { "HtML�� CSS", "ȫ�浿", 28000 };
	book java_book = { "JAVA Language", "�̼���" };

	cout << "First book name is " << web_book.title << " , that author is "
		<< web_book.author << " and the book price is  " << web_book.price << " dollars.\n" << endl;

	cout << "Second book name is " << java_book.title << " , that author is "
		<< java_book.author << " and the book price is  " << java_book.price << " dollars." << endl;

	return 0;
}

/*
�Լ� ȣ��� ���޵Ǵ� �μ� Ȥ�� �Լ� ����� ��ȯ�Ǵ� ��ȯ�����ε� ����ü ��� ����
�⺻ Ÿ�԰� ������ ���� ���, ����ü�� ����Ű�� ������, ����ü�� �� ����������� ����� �� ����
*/

int study_function_and_struct() {

	int hong_prop;
	Prop hong = { 100, 1 };

	hong_prop = CalcProperty(hong.savings, hong.loan); // ����ü ������� �Լ� �μ��� ����

	cout << "Hong's wealth is $" << hong_prop << " in total, minus $" <<
		hong.savings << " and $" << hong.loan << " in loans." << endl;

	return 0;

}

int study_function_and_struct_2() {
	int hong_prop;
	Prop hong = { 100, 2 };
	hong_prop = CalcProperty2(&hong); // ����ü �ּ� �Լ� �μ��� ����

	cout << "Hong's wealth is $" << hong_prop << " in total, minus $" <<
		hong.savings << " and $" << hong.loan << " in loans." << endl;

	return 0;

}

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


int CalcProperty(int s, int l) {
	return (s - l);
}

int CalcProperty2(Prop* money) {

	money->savings = 100; //ȣ��� �Լ����� ���� ����ü ������ ����
	return (money->savings - money->loan);
}

//const Ű���� ����� ����ü�� ������ ���� �����ϴ� �� ����
int CalcProperty3(const Prop* money) {

	return (money->savings - money->loan);
}

/* 
��ø�� ����ü : ����ü ���ǽ� ��� ������ �� �ٸ� ����ü ���� ����
����ü ũ�� : ��� ���� ũ�⿡ ���� ���� ������ ����ü ũ�Ⱑ �׻� ����������� ���հ� ��ġ���� ����

����ü�� �޸𸮿� �Ҵ��� ��� �����Ϸ��� ���α׷� �ӵ� ����� ���� ����Ʈ �е� ��Ģ ���
	 ����Ʈ �е� : �����Ϸ��� ��� ������ ���� �ϱ� ���ؼ� ũ�Ⱑ ���� ū ��� ������ �������� ��� ��������� 
				�޸� ũ�⸦ ���� , �̶� �߰��Ǵ� ����Ʈ�� �е� ����Ʈ�� ��
*/

int study_struct_size() {
	cout << "The size of each member of the structure Type Size is : " << endl;
	cout << sizeof(char) << " , " << sizeof(int) << " , " << sizeof(double) << endl;

	cout << "The size of the struct Type Size is : " << endl;
	cout << sizeof(TypeSize);
	return 0;
}

/*
����ü : Union : ��� �鿡�� ����ü�� ������, ��� ��� ������ �ϳ��� �޸� ������ �����ϴ� ���� �ٸ�
		��� ��� ������ ���� �޸𸮸� �����ϱ� ������ ����ü�� �ѹ��� �ϳ��� ��� ������ ����� �� ����
		������ �ұ�Ģ ���̰� �̸� �� �� ���� �پ��� Ÿ���� �����͸� ������ �� �ֵ��� ����� Ÿ��

����ü ũ�� : ũ�Ⱑ ���� ū ��� ������ ũ��� �޸� �Ҵ� ����
���� ����ü �迭 ���� ���� ũ��� ������ �迭 ��ҿ� �پ��� ũ���� ������ ���� ����

*/

int study_union() {
	
	ShareData var;
	var.c = 0x12345678;

	cout << "hex : " << hex << endl;
	cout << "char : " << var.a << endl;
	cout << "short : " << var.b << endl;
	cout <<"int : " << var.c;

	return 0;

}

/*
����ü : enum : ���ο� Ÿ�� ����� ���ÿ� �� Ÿ���� ������ �ִ� ������ ������� ���� ���
���� ���α׷� ������ ��� �� ������ ���ϴ� ���� �ǹ� �ο� ����
*/

int study_enum() {

	int input;
	Weather wt;

	cout << "How's the weather today? " << endl;
	cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;
	cin >> input;
	wt = (Weather)input;

	switch (wt) {

	case SUNNY:
		cout << "Very sunny today!";
		break;

	case CLOUD:
		cout << "Very cloudy today!";
		break;

	case RAIN:
		cout << "Rainy today!";
		break;

	case SNOW:
		cout << "It snow today!";
		break;

	default:
		cout << "Please enter an exact constant!";
		break;
	}

	cout << endl << "Each constant value of the enumeration Weather is "
		<< SUNNY << " , " << CLOUD << " , " << RAIN << "	and " << SNOW << "." << endl;

	return 0;
}