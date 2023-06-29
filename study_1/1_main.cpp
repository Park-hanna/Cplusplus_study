#include <iostream>
using namespace std;

int study_in_out();
int study_arithmetic(int age);
int study_type();
int study_decimal_point();

int main() {

	int age = study_in_out();
	
	study_arithmetic(age);

	study_type();
	study_decimal_point();
}

