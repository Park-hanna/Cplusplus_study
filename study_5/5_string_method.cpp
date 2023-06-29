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

#include <iostream>
#include <string>
using namespace std;

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