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

int study_struct_type() {

	book web_book = { "HtML과 CSS", "홍길동", 28000 };
	book java_book = { "JAVA Language", "이순신" };

	cout << "First book name is " << web_book.title << " , that author is "
		<< web_book.author << " and the book price is  " << web_book.price << " dollars.\n" << endl;

	cout << "Second book name is " << java_book.title << " , that author is "
		<< java_book.author << " and the book price is  " << java_book.price << " dollars." << endl;

	return 0;
}



