#include <iostream>
using namespace std;


struct TypeSize {
	char a;
	int b;
	double c;
};

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