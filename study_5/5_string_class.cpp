/*
<String Class> : #include <string> 필요
-> string class는 std namespace에 속해 있음.
   따라서 using 지시자 사용하거나 참조

선언시 단순 변수로 선언 -> 사용자 길이 명시 불필요
string 객체도 배열처럼 인덱스를 통해 다룰수 있음
 length() or size() 사용시 객체 현재 길이 알 수 있음

 strcpy() or strncpy() 사용시 문자형 배열 사이 대입 가능
  = 사용 더 간단

 strcat() of strncat() 사용시 문자형 배열 사이 추가나 결합 가능
  += or appedn() 사용이 더 간단

 cin -> 문자열 입력을 한 단어 단위로 수행
 getline() -> 문자열 한 행 단위로 수행
	첫 번째 매개변수로 cin객체,
	두번째 매개변수로 문자열 저장할 string 객체 변수 전달받음
*/

#include <iostream>
#include <string>
using namespace std;

int study_string_class() {

	cout << "<About String Class>\n" << endl;

	cout << "(1st Sting Class Example)" << endl;
	string str1;
	str1 = "C++ Programming";
	string str2 = "C++";
	cout << str1 << " || " << str2 << endl;

	//use length() method
	cout << "\n(2nd Sting Class Example)";

	string dog;
	cout << "\nThe length of the current dog variable is " << dog.length() << endl;

	dog = "Navi";
	cout << "\nDog's name : " << dog << endl;
	cout << "The length of the current dog variable is " << dog.length() << endl;
	cout << "The dog name first spell is " << dog[0] << endl;

	//use (=)
	cout << "\n(3rd Sting Class Example)" << endl;
	string str3 = "C++ is Cool!";
	string str4;

	str4 = str3;
	cout << str4 << endl;

	//use (+=)
	cout << "\n(4th Sting Class Example)" << endl;
	string str5 = "C++ is";
	string str6 = "Cool! and funny!";
	string str7;

	str7 = str5 + str6;
	cout << str7 << endl;

	str5 += str6;
	cout << str5 << endl;

	//use geline
	cout << "\n(5th Sting Class Example)" << endl;
	string name, subject;

	cout << "Input your name : ";
	getline(cin, name);

	cout << "Input your favorite subject : ";
	getline(cin, subject);

	cout << name << " is like " << subject << endl;

	return 0;


}
