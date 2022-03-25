#include <iostream>
using namespace std;

class Point {
public:
	int x;
	void Print() {
		cout << "z = " << z << "\nx = " << x;
		PrintY();
	}

protected: // недоступно объекту, но доступно при наследовании
	int y;

private:
	int z = 2;
	void PrintY() {
		y = 1;
		cout << "\ny = " << y;
	}
};

int main() {
	Point a;
	a.x = 5;
	a.Print();
}