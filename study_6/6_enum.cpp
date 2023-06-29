/*
열거체 : enum : 새로운 타입 선언과 동시에 그 타입이 가질수 있는 정수형 상수값도 같이 명시
사용시 프로그램 가독성 향상 및 변수가 지니는 값에 의미 부여 가능
*/

#include <iostream>
using namespace std;

enum Weather { SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30 };

int study_enum() {

	int input;
	Weather wt;

	cout << "How's the weather today? " << endl;
	cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;
	cin >> input;
	wt = (Weather)input;

	switch (wt) {

	case SUNNY:
		cout << "Very sunny today!";
		break;

	case CLOUD:
		cout << "Very cloudy today!";
		break;

	case RAIN:
		cout << "Rainy today!";
		break;

	case SNOW:
		cout << "It snow today!";
		break;

	default:
		cout << "Please enter an exact constant!";
		break;
	}

	cout << endl << "Each constant value of the enumeration Weather is "
		<< SUNNY << " , " << CLOUD << " , " << RAIN << "	and " << SNOW << "." << endl;

	return 0;
}