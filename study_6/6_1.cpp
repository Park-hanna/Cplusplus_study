/*
구조체 : 사용자가 기본 타입을 이용해 새롭게 정의할 수 있는 사용자 정의 타입
	구성 변수 : 구조체의 멤버(멤버변수) -> 함수도 멤버 변수로 가질 수 있음

	struct 구조체 이름 {
		멤버변수1타입 멤버변수1이름;
	};

	선언
	struct 구조체이름 구조체변수이름;

	접근 방법 :
		구조체변수이름.멤버변수이름

	구조체 변수 초기화 :
		구조체변수이름 = {멤버변수1의초기값, 멤버변수2의초기값,...};

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

	book web_book = { "HtML과 CSS", "홍길동", 28000 };
	book java_book = { "JAVA Language", "이순신" };

	cout << "First book name is " << web_book.title << " , that author is "
		<< web_book.author << " and the book price is  " << web_book.price << " dollars.\n" << endl;

	cout << "Second book name is " << java_book.title << " , that author is "
		<< java_book.author << " and the book price is  " << java_book.price << " dollars." << endl;

	return 0;
}

/*
함수 호출시 전달되는 인수 혹은 함수 종료시 반환되는 반환값으로도 구조체 사용 가능
기본 타입과 완전히 같은 방식, 구조체를 가리키는 포인터, 구조체의 한 멤버변수만을 사용할 수 있음
*/

int study_function_and_struct() {

	int hong_prop;
	Prop hong = { 100, 1 };

	hong_prop = CalcProperty(hong.savings, hong.loan); // 구조체 멤버변수 함수 인수로 전달

	cout << "Hong's wealth is $" << hong_prop << " in total, minus $" <<
		hong.savings << " and $" << hong.loan << " in loans." << endl;

	return 0;

}

int study_function_and_struct_2() {
	int hong_prop;
	Prop hong = { 100, 2 };
	hong_prop = CalcProperty2(&hong); // 구조체 주소 함수 인수로 전달

	cout << "Hong's wealth is $" << hong_prop << " in total, minus $" <<
		hong.savings << " and $" << hong.loan << " in loans." << endl;

	return 0;

}

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


int CalcProperty(int s, int l) {
	return (s - l);
}

int CalcProperty2(Prop* money) {

	money->savings = 100; //호출된 함수에서 원본 구조체 데이터 변경
	return (money->savings - money->loan);
}

//const 키워드 사용해 구조체의 데이터 직접 수정하는 것 방지
int CalcProperty3(const Prop* money) {

	return (money->savings - money->loan);
}

/* 
중첩된 구조체 : 구조체 정의시 멤버 변수로 또 다른 구조체 포함 가능
구조체 크기 : 멤버 변수 크기에 따라 결정 하지만 구조체 크기가 항상 멤버변수들의 총합과 일치하지 않음

구조체를 메모리에 할당할 경우 컴파일러는 프로그램 속도 향상을 위해 바이트 패딩 규칙 사용
	 바이트 패딩 : 컴파일러는 멤모리 접근을 쉽게 하기 위해서 크기가 가장 큰 멤버 변수를 기준으로 모든 멤버변수의 
				메모리 크기를 맞춤 , 이때 추가되는 바이트를 패딩 바이트라 함
*/

int study_struct_size() {
	cout << "The size of each member of the structure Type Size is : " << endl;
	cout << sizeof(char) << " , " << sizeof(int) << " , " << sizeof(double) << endl;

	cout << "The size of the struct Type Size is : " << endl;
	cout << sizeof(TypeSize);
	return 0;
}

/*
공용체 : Union : 모든 면에서 구조체와 같으나, 모든 멤버 변수가 하나의 메모리 공간을 공유하는 점이 다름
		모든 멤버 변수가 같은 메모리를 공유하기 때문에 공용체는 한번에 하나의 멤버 변수만 사용할 수 있음
		순서가 불규칙 적이고 미리 알 수 없는 다양한 타입의 데이터를 저장할 수 있도록 설계된 타입

공용체 크기 : 크기가 가장 큰 멤버 변수의 크기로 메모리 할당 받음
따라서 공용체 배열 사용시 같은 크기로 구성된 배열 요소에 다양한 크기의 데이터 저장 가능

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
열거체 : enum : 새로운 타입 선언과 동시에 그 타입이 가질수 있는 정수형 상수값도 같이 명시
사용시 프로그램 가독성 향상 및 변수가 지니는 값에 의미 부여 가능
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