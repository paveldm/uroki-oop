#include <iostream>
#include <string>
using namespace std;

class Human {
public:
	int age; // поле класса
	string name; // поле класса

	void Print() { // функция класса
		cout << "Имя " << name << "\tВозраст " << age << "\n";
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	Human firstHuman; // объект firstHuman класса Human

	firstHuman.age = 30;
	firstHuman.name = "Ivanov Ivan Ivanovich";
	
	firstHuman.Print(); // вызов функции класса

	Human secondHuman; // объект firstHuman класса Human
	secondHuman.age = 19;
	secondHuman.name = "Noname";
	cout << secondHuman.age << "\n";
	cout << secondHuman.name << "\n";

}