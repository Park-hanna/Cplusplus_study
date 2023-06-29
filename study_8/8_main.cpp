
#include <iostream>
#include <stdio.h>

using namespace std;

struct Book {

	string title;
	string author;
	int price;

};

int study_reference();
int study_reference_in_function();
void Swap(int& x, int& y);

int study_reference_struct();
void Display(const Book&);

int study_defualt_arg();

int study_func_overloading();

int study_inline_func();
int study_inline_func_2();
int study_macro_func();

int main() {

	/*study_reference();
	cout << "\n" << endl;
	study_reference_in_function();
	cout << "\n" << endl;
	study_reference_struct();
	cout << "\n" << endl;
	study_defualt_arg();
	cout << "\n" << endl;*/
	//study_func_overloading();
	//cout << "\n" << endl;
	//study_inline_func();

	//study_inline_func_2();
	study_macro_func();
}
	
