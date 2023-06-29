#include <iostream>
using namespace std;

struct book {

	string title;
	string author;
	int price;
};

struct Prop {

	int savings;
	int loan;
};

struct TypeSize {
	char a;
	int b;
	double c;
};


union ShareData {

	unsigned char a;
	unsigned short b;
	unsigned int c;
};

enum Weather { SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30 };

Prop InitProperty(void);

int study_struct_type();
int study_function_and_struct();
int study_function_and_struct_2();
int study_function_and_struct_3();

int study_enum();
int study_union();

int study_struct_size();

int CalcProperty(int, int);
int CalcProperty2(Prop*);
int CalcProperty3(const Prop*);

int main() {

	study_struct_type();
	cout << "\n";
	study_function_and_struct();
	cout << "\n";
	study_function_and_struct_2();
	cout << "\n";
	study_function_and_struct_3();
	cout << "\n";
	study_struct_size();
	cout << "\n";
	study_union();
	cout << "\n";
	study_enum();
	cout << "\n";
}