/*
<String Class> : #include <string> �ʿ�
-> string class�� std namespace�� ���� ����.
   ���� using ������ ����ϰų� ����

����� �ܼ� ������ ���� -> ����� ���� ��� ���ʿ�
string ��ü�� �迭ó�� �ε����� ���� �ٷ�� ����
 length() or size() ���� ��ü ���� ���� �� �� ����

 strcpy() or strncpy() ���� ������ �迭 ���� ���� ����
  = ��� �� ����

 strcat() of strncat() ���� ������ �迭 ���� �߰��� ���� ����
  += or appedn() ����� �� ����

 cin -> ���ڿ� �Է��� �� �ܾ� ������ ����
 getline() -> ���ڿ� �� �� ������ ����
	ù ��° �Ű������� cin��ü,
	�ι�° �Ű������� ���ڿ� ������ string ��ü ���� ���޹���
*/

#include <iostream>
#include <string>
using namespace std;

int study_string_class() {

	cout << "<About String Class>\n" << endl;

	cout << "(1st Sting Class Example)" << endl;
	string str1;
	str1 = "C++ Programming";
	string str2 = "C++";
	cout << str1 << " || " << str2 << endl;

	//use length() method
	cout << "\n(2nd Sting Class Example)";

	string dog;
	cout << "\nThe length of the current dog variable is " << dog.length() << endl;

	dog = "Navi";
	cout << "\nDog's name : " << dog << endl;
	cout << "The length of the current dog variable is " << dog.length() << endl;
	cout << "The dog name first spell is " << dog[0] << endl;

	//use (=)
	cout << "\n(3rd Sting Class Example)" << endl;
	string str3 = "C++ is Cool!";
	string str4;

	str4 = str3;
	cout << str4 << endl;

	//use (+=)
	cout << "\n(4th Sting Class Example)" << endl;
	string str5 = "C++ is";
	string str6 = "Cool! and funny!";
	string str7;

	str7 = str5 + str6;
	cout << str7 << endl;

	str5 += str6;
	cout << str5 << endl;

	//use geline
	cout << "\n(5th Sting Class Example)" << endl;
	string name, subject;

	cout << "Input your name : ";
	getline(cin, name);

	cout << "Input your favorite subject : ";
	getline(cin, subject);

	cout << name << " is like " << subject << endl;

	return 0;


}
