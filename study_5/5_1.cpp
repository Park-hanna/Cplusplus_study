#include <iostream>
#include <string>
using namespace std;

int study_string_1();
int study_string_2();
int study_string_class();
int study_string_method();

int main() {

	study_string_1();
	study_string_2();
	study_string_class();
	study_string_method();
}

/*
string == character set
NULL => ������ �迭�� ����� ���ڿ� ������ ���� ���� �˷�����
		�׷��� ���� ���ڿ��� ���� ���� �� ���� �����Ⱚ ���� ����
		���� ���ڿ��� ���� �����Ͱ� ������ '\0' ǥ��
	null ���� ������ ������ ������ �迭�� ���� ���ڿ� ����

2���� ǥ�� ���
1) C��� �� : "" ���
2) string class ���

char�� ũ�� ������ �Է��� ���� ��� ����� ������
 1. ���Ⱑ ���� �� ���� �Է��� �� �� ����
 -> cin ��ü�� ����, �� ����, ĳ���� ���� ���� �� ��� ���ڿ� ������ �ν�
  ���� ���� ���θ� �Է¹������� cin ��ü�� get() �޼ҵ带 ����ؼ� ����

 2. ũ�� �̻� �Է� �Ұ��� ���α׷� ���� ���� ��
 -> cin ��ü�� ignore() �޼ҵ� ����� ����
  �̶� �־��� ũ�� �̻� �Է��ص� ũ�⸸ŭ�� �Է��� ����
*/

int study_string_1() {

	const int SIZE = 20;
	char address1[SIZE];
	char name1[SIZE];

	char address2[SIZE];
	char name2[SIZE];

	cout << "<About string>\n";

	cout << "1st Example\n";

	cout << "Input your name : ";
	cin.get(name1, SIZE).get();
	cout << "Input your city : ";
	cin.get(address1, SIZE).get();
	cout << name1 << " || " << address1 << endl;

	cout << "\n2nd Example\n";
	
	cout << "Input your name : ";
	cin.get(name2, SIZE).ignore(SIZE, '\n');
	cout << "Input your city : ";
	cin.get(address2, SIZE).ignore(SIZE, '\n');
	cout << name2 << " || " << address2 << endl;

	return 0;
}

int study_string_2() {

	string address, name;

	cout << "\n<Using String Class>" << endl;
	cout << "Input your name : ";
	getline(cin, name);

	cout << "Input yout city : ";
	getline(cin, address);
	cout << name << " || " << address << endl;

	return 0;
}

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
	cout<<"\nDog's name : " << dog << endl;
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


/*
<String Method>
length() and size() 
	=> ���ڿ� ���� ��ȯ �̶�, size()�� �ش� string ��ü�� ���� ����ϴ� ũ�� ��ȯ
append()
	=> ���ڿ� ���� �ٸ� ���ڿ� �߰�
	 ���ڿ�.append(�߰��ҹ��ڿ�);
	 ���ڿ�.append(�߰��ҹ��ڿ�, ������ġ, ����); 
	 //�߰��� ���ڿ��� ������ġ���� ���� ��ŭ �ǳ��� �߰�
	 ���ڿ�.append(����, �߰��ҹ���);
	 //�߰��� ���ڸ� ������ŭ �ǳ��� �߰�
find()
	=> Ư�� ���ڿ� ã��, �� ������ġ ��ȯ
	 ���ڿ�.find(ã�����ڿ�);
	 ���ڿ�.find(ã������);
	 ���ڿ�.find(ã�����ڿ�, ������ġ); 
	 //������ġ���� ã�� ���ڿ� ã�� ��ġ ��ȯ
compare()
	=> �� ���ڿ� ���� ���� �� 
		str1.compare(str2) == 0 : ���ڿ��� ���� ��� : ��
		str1.compare(str2) < 0 : ���� ���������� �տ� �ִ� ��� : ��
		str1.compare(str2) > 0 : ���� ���������� �ڿ� �ִ� ��� : ��
replace()
	=> Ư�� ���ڿ� ã��, �� ���ڿ��� �ٸ� ���ڿ��� ��ü
	 ���ڿ�.replace(��ü�� ���ڿ� ������ġ, ������ ���ڿ� ����, ���ο� ���ڿ�);
	 //���޵� ���� ��ġ ���� ���ڿ��� ���� ��ŭ ���� ��, ���ο� ���ڿ� ����
capacity() and max_size()
	=> capacity() : ���ڿ� ����� ���� �ʰ� ������ �� �ִ� �ִ� ���ڿ� ���� ��ȯ
	=> max_size() : ���ڿ��� �ִ��� ���Թ����� ���� �� �ִ� �ִ� ���ڿ� ���� ��ȯ
*/

int study_string_method() {

	cout << "\n<About String Method>" << endl;
	cout << "\n" << endl;

	//use length(), size()
	cout << "(Using length() method and size() method)" << endl;

	string str1;
	string str2 = "C++ Programming";

	cout << "String str1 length : " << str1.length() << endl;
	cout << "String str2 length : " << str2.size() << endl;
	cout << "\n" << endl;

	//use append()
	cout << "(Using append() method)" << endl;

	string str3, str4, str5;
	str3.append("C++ Programming");
	str4.append("C++ Programming", 4, 7);
	str5.append(4, 'X');

	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
	cout << "\n" << endl;

	//use find()
	cout << "(Using find() method)" << endl;

	string str6 = "C++ Programming";

	cout << str6.find("Pro") << endl;
	cout << str6.find("r") << endl;

	if (str6.find("Pro", 5) != string::npos) {
		cout << "The string was found." << endl;

	}
	else {
		cout << "The string was not found." << endl;
	}
	cout << "\n" << endl;

	//use compare()
	cout << "(Using compare() method)" << endl;

	string str7 = "ABC";
	string str8 = "ABD";

	if (str7.compare(str8) == 0) {
		cout << str7 << " is more lexicographically preceded then " << str8 << endl;
	}
	else {
		cout << str7 << " is more lexicographically later then " << str8 << endl;
	}
	cout << "\n" << endl;

	//use replace()
	cout << "(Using replace() method)" << endl;

	string str9 = "C++ is very nice!";
	string str10 = "nice";
	string str11 = "awesome";

	string::size_type index = str9.find(str10);
	if (index != string::npos) {
		str9.replace(index, str10.length(), str11);
	}

	cout << str9 << endl;
	cout << "\n" << endl;

	//use capacity() and max_size()
	cout << "(Using capacity() method and max_size() method)" << endl;

	string str12 = "C++ Programming";

	cout << "String str12 length : " << str12.length() << endl;
	cout << "String str12 capacity : " << str12.capacity() << endl;
	cout << "String str12 max_size : " << str12.max_size() << endl;

	return 0;
}