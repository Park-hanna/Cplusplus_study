/*
공용체 : Union : 모든 면에서 구조체와 같으나, 모든 멤버 변수가 하나의 메모리 공간을 공유하는 점이 다름
		모든 멤버 변수가 같은 메모리를 공유하기 때문에 공용체는 한번에 하나의 멤버 변수만 사용할 수 있음
		순서가 불규칙 적이고 미리 알 수 없는 다양한 타입의 데이터를 저장할 수 있도록 설계된 타입

공용체 크기 : 크기가 가장 큰 멤버 변수의 크기로 메모리 할당 받음
따라서 공용체 배열 사용시 같은 크기로 구성된 배열 요소에 다양한 크기의 데이터 저장 가능

*/

#include <iostream>
using namespace std;

union ShareData {

	unsigned char a;
	unsigned short b;
	unsigned int c;
};


int study_union() {

	ShareData var;
	var.c = 0x12345678;

	cout << "hex : " << hex << endl;
	cout << "char : " << var.a << endl;
	cout << "short : " << var.b << endl;
	cout << "int : " << var.c;

	return 0;

}
