#include <iostream>
#include <string>
using namespace std;

class Human {
public:
	int age; // ���� ������
	string name; // ���� ������

	void Print() { // ������� ������
		cout << "��� " << name << "\t������� " << age << "\n";
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	Human firstHuman; // ������ firstHuman ������ Human

	firstHuman.age = 30;
	firstHuman.name = "Ivanov Ivan Ivanovich";
	
	firstHuman.Print(); // ����� ������� ������

	Human secondHuman; // ������ firstHuman ������ Human
	secondHuman.age = 19;
	secondHuman.name = "Noname";
	cout << secondHuman.age << "\n";
	cout << secondHuman.name << "\n";

}