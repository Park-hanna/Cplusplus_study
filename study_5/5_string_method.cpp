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

#include <iostream>
#include <string>
using namespace std;

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