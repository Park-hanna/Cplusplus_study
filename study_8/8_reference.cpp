/*
참조자 - reference : 특정 변수의 실 이름대신 사용할 수 있음
크기가 큰 구조체와 같은 데이터를 함수의 인수로 전달해야할 경우 사용
클래스 설계에도 자주 사용

	int 변수이름;
	int& 참조자이름 = 변수이름; // 참조자 선언
이때 & 연산자는 주소연산자가 아닌 타입을 식별하기 위해 사용하는 식별자
즉, int&는 int형 변수에 대한 참조 의미

주의 사항
1. 참조자의 타입은 대상이되는 변수의 타입과 일치해야함
2. 참조자는 선언과 동시에 초기화돼야 함
3. 참조자는 한번 초기화되면, 참조하는 대상 변경 불가


*/

#include <iostream>
using namespace std;

struct Book {

	string title;
	string author;
	int price;

};

int study_reference();
int study_reference_in_function();
void Swap(int& x, int& y);

int study_reference_struct();

int study_reference_struct();
void Display(const Book&);


int study_reference() {

	int x = 10;
	int& y = x;

	cout << "X : " << x << ", Y : " << y << endl;
	y++;

	cout << "X : " << x << ", Y : " << y << endl;
	cout << "Address of X : " << &x << ", Address of Y : " << &y << endl;

	return 0;

}

/*
함수 인수로서 전달
-> 참조자는 주로 함수에 인수 전달때 사용
함수가 참조자를 인수로 전달받으면, 참조자가 참조하고 있는 실제 변수의 값을 함수 내에서
조작 가능

아래와 같은 참조에 의한 전달은 참조자 뿐만 아니라 포인터를 사용해도 같은 결과나옴

함수 인수로 참조자 사용 방법 특징
1. 함수 내에서 참조 연산자 (*)를 사용하지 않으므로, 함수 내부의 코드가 깔끔하고 직관적
2. 함수의 호출이 값에 의한 전달 방법과 같은 형태가되어 코드 읽기 쉽지 않음
 따라서 간단함 함수에서는 지양하며 값에 의한 전달을 사용하는 것을 지향

참조 호출이 꼭 필요시 참조자보다 포인터 사용이 더 직관적일 수 있음
*/

int study_reference_in_function() {

	int num1 = 3, num2 = 7;
	cout << "The value of num1 before change is " << num1 << ", and the value of num2 is " << num2 << endl;

	Swap(num1, num2);
	cout << "The value of num1 after change is " << num1 << ", and the value of num2 is " << num2 << endl;

	return 0;

}

void Swap(int& x, int& y) {
	int temp;

	temp = x;
	x = y;
	y = temp;

}

/*
구조체 참조 : 사용자 정의 타입을 다룰때 유용하게 사용
*/

int study_reference_struct(void) {

	Book web_book = { "HTML과 CSS", "홍길동", 28000 };
	Display(web_book);
	return 0;
}

void Display(const Book& bk) {
	cout << "The title of the book " << bk.title << ", ";
	cout << "author is " << bk.author << " and ";
	cout << "the price is $" << bk.price << endl;
}
