#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int r1, r2, r3;
	cin >> r1 >> r2 >> r3;
	if (r1 + r2 + r3 == 180 && r1 == r2 && r2 == r3 && r1 == r3) {
		cout << "Equilateral" << endl;
	}
	else if (r1 + r2 + r3 == 180 && ((r1 == r2) || (r1 == r3) || (r2 == r3))) {
		cout << "Isosceles" << endl;
	}
	else if (r1 + r2 + r3 == 180) {
		cout << "Scalene" << endl;
	}
	else {
		cout << "Error" << endl;
	}
}