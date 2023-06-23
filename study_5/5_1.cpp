#include <iostream>
#include <string>
using namespace std;

int study_string_1();
int study_string_2();
int study_string_class();
int study_string_method();

int main() {

	study_string_1();
	study_string_2();
	study_string_class();
	study_string_method();
}

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
	cout<<"\nDog's name : " << dog << endl;
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


/*
<String Method>
length() and size() 
	=> 문자열 길이 반환 이때, size()는 해당 string 객체가 실제 사용하는 크기 반환
append()
	=> 문자열 끝에 다른 문자열 추가
	 문자열.append(추가할문자열);
	 문자열.append(추가할문자열, 시작위치, 개수); 
	 //추가할 문자열의 시작위치부터 개수 만큼 맨끝에 추가
	 문자열.append(개수, 추가할문자);
	 //추가할 문자를 개수만큼 맨끝에 추가
find()
	=> 특정 문자열 찾아, 그 시작위치 반환
	 문자열.find(찾을문자열);
	 문자열.find(찾을문자);
	 문자열.find(찾을문자열, 시작위치); 
	 //시작위치부터 찾을 문자열 찾아 위치 반환
compare()
	=> 두 문자열 간의 내용 비교 
		str1.compare(str2) == 0 : 문자열이 같을 경우 : 참
		str1.compare(str2) < 0 : 사전 편찬순으로 앞에 있는 경우 : 참
		str1.compare(str2) > 0 : 사전 편찬순으로 뒤에 있는 경우 : 참
replace()
	=> 특정 문자열 찾아, 그 문자열을 다른 문자열로 대체
	 문자열.replace(대체할 문자열 시작위치, 대제할 문자열 길이, 새로운 문자열);
	 //전달된 시작 위치 부터 문자열의 길이 만큼 제거 후, 새로운 문자열 삽입
capacity() and max_size()
	=> capacity() : 문자열 재대입 받지 않고 저장할 수 있는 최대 문자열 길이 반환
	=> max_size() : 문자열이 최대한 대입받으면 가질 수 있는 최대 문자열 길이 반환
*/

int study_string_method() {

	cout << "\n<About String Method>" << endl;
	cout << "\n" << endl;

	//use length(), size()
	cout << "(Using length() method and size() method)" << endl;

	string str1;
	string str2 = "C++ Programming";

	cout << "String str1 length : " << str1.length() << endl;
	cout << "String str2 length : " << str2.size() << endl;
	cout << "\n" << endl;

	//use append()
	cout << "(Using append() method)" << endl;

	string str3, str4, str5;
	str3.append("C++ Programming");
	str4.append("C++ Programming", 4, 7);
	str5.append(4, 'X');

	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
	cout << "\n" << endl;

	//use find()
	cout << "(Using find() method)" << endl;

	string str6 = "C++ Programming";

	cout << str6.find("Pro") << endl;
	cout << str6.find("r") << endl;

	if (str6.find("Pro", 5) != string::npos) {
		cout << "The string was found." << endl;

	}
	else {
		cout << "The string was not found." << endl;
	}
	cout << "\n" << endl;

	//use compare()
	cout << "(Using compare() method)" << endl;

	string str7 = "ABC";
	string str8 = "ABD";

	if (str7.compare(str8) == 0) {
		cout << str7 << " is more lexicographically preceded then " << str8 << endl;
	}
	else {
		cout << str7 << " is more lexicographically later then " << str8 << endl;
	}
	cout << "\n" << endl;

	//use replace()
	cout << "(Using replace() method)" << endl;

	string str9 = "C++ is very nice!";
	string str10 = "nice";
	string str11 = "awesome";

	string::size_type index = str9.find(str10);
	if (index != string::npos) {
		str9.replace(index, str10.length(), str11);
	}

	cout << str9 << endl;
	cout << "\n" << endl;

	//use capacity() and max_size()
	cout << "(Using capacity() method and max_size() method)" << endl;

	string str12 = "C++ Programming";

	cout << "String str12 length : " << str12.length() << endl;
	cout << "String str12 capacity : " << str12.capacity() << endl;
	cout << "String str12 max_size : " << str12.max_size() << endl;

	return 0;
}