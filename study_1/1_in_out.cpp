/*
namespace -> 이름이 기억되는 영역 (이름이 소속된 공간으로 이름 충돌 방지)
표준 구성 요소(class, function, parameter...) 등 std 공간에 저장되어 있음
std 정의 사용시 std:: 접두어를 붙임
	using namespace std; //이러면 std에 속한 정의들은 namespace이름 안붙여도 됨

cout -> 미리 정의 된 출력 stream object
	std :: cout << output data;
cin -> 미리 정의 된 입력 stream object
	std :: cin >> save data;
이때, cin은 오른쪽에 입력한 변수의 타입과 동일하게 변환
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