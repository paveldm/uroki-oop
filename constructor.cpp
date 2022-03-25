#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int valueX, int valueY) {
		x = valueX;
		y = valueY;
	}

	void SetY(int valueY) {
		y = valueY;
	}
	int GetY() {
		return y;
	}

	int Getx() {
		return x;
	}
	void Setx(int valueX) {
		x = valueX;
	}

	void Print() {
		cout << "X = " << x << "\tY = " << y << "\n";
	}
};

int main() {
	Point a(5,44);
	a.Setx(5);
	a.SetY(11);
	a.Print();
	cout << a.Getx() << "\n";

	Point b(77, 9);
	b.Print();
}