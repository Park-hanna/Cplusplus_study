#include <iostream>
#include <string>
using namespace std;

/*
string == character set
NULL => 문자형 배열로 선언된 문자열 변수는 끝을 따로 알려야함
		그래야 실제 문자열에 속한 값과 그 외의 쓰레기값 구분 가능
		따라서 문자열에 속한 데이터가 끝나면 '\0' 표시
	null 문자 유무로 문자형 데이터 배열과 실제 문자열 구분

2가지 표현 방식
1) C언어 식 : "" 사용
2) string class 사용

char에 크기 지정된 입력을 받을 경우 생기는 문제점
 1. 띄어쓰기가 들어가면 그 다음 입력을 할 수 없음
 -> cin 객체는 띄어쓰기, 탭 문자, 캐리지 리턴 문자 등 모두 문자열 끝으로 인식
  따라서 위의 전부를 입력받으려면 cin 객체의 get() 메소드를 사용해서 수정

 2. 크기 이상 입력 불가로 프로그램 강제 종료 됨
 -> cin 객체의 ignore() 메소드 사용해 수정
  이때 주어진 크기 이상 입력해도 크기만큼만 입력을 받음
*/

int study_string_1() {

	const int SIZE = 20;
	char address1[SIZE];
	char name1[SIZE];

	char address2[SIZE];
	char name2[SIZE];

	cout << "<About string>\n";

	cout << "1st Example\n";

	cout << "Input your name : ";
	cin.get(name1, SIZE).get();
	cout << "Input your city : ";
	cin.get(address1, SIZE).get();
	cout << name1 << " || " << address1 << endl;

	cout << "\n2nd Example\n";
	
	cout << "Input your name : ";
	cin.get(name2, SIZE).ignore(SIZE, '\n');
	cout << "Input your city : ";
	cin.get(address2, SIZE).ignore(SIZE, '\n');
	cout << name2 << " || " << address2 << endl;

	return 0;
}

int study_string_2() {

	string address, name;

	cout << "\n<Using String Class>" << endl;
	cout << "Input your name : ";
	getline(cin, name);

	cout << "Input yout city : ";
	getline(cin, address);
	cout << name << " || " << address << endl;

	return 0;
}