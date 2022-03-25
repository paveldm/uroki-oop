#include <iostream>
using namespace std;

class CoffeeGrinder {
private:
	bool CheckVoltage() {
		return false;
		}

public:
	void Start() {
		if (CheckVoltage()) {
			cout << "Start";
		}
		else {
			cout << "Error";
		}
	}
};

int main() {
	CoffeeGrinder a;
	a.Start();
}