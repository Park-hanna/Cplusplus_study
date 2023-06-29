/*
����ü : enum : ���ο� Ÿ�� ����� ���ÿ� �� Ÿ���� ������ �ִ� ������ ������� ���� ���
���� ���α׷� ������ ��� �� ������ ���ϴ� ���� �ǹ� �ο� ����
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