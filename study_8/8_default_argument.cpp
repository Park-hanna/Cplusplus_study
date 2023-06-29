/*
default argument : 기본값이 미리 정의되어 있는 인수
함수 호출시 인수를 전달하지 않으면, 함수는 자동으로 미리 정의되어 있는 디폴트
인수값 사용 당연히 인수 전달해 함수 호출하면, 전달된 인수가지고 함수 호출 

한마디로 디폴트인수는 인수의 개수를 다르게해 같은 함수를 호출하는 것

함수의 원형에만 지정가능
가장 오른쪽부터 시작해 순서대로만 지정 가능
가운데 인수들만 별도로 디폴트 인수 지정 불가

함수로 전달된 인수는 왼쪽부터 순서대로 매개변수 목록에 대입됨
따라서 디폴트 인수가 설정된 함수를 호출할 때, 인수의 전달을 건너뛸 수 없음
*/

#include <iostream>
using namespace std;

double Multi(double, double = 2);

int study_defualt_arg() {

	cout << Multi(3) << endl;
	cout << Multi(3, 3) << endl;
	cout << Multi(3, 4) << endl;

	return 0;
}

double Multi(double x, double n) {

	double result = x;

	for (int i = 1; i < n; i++) {
		result *= x;
	}

	return result;
}
