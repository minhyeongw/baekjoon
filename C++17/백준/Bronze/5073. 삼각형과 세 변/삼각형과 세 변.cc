#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	while (a != 0, b != 0, c != 0) {
		int max;
		int sum;
		if (a >= b && a >= c) {
			max = a;
			sum = b + c;
		}
		else if (b >= c&&b>a) {
			max = b;
			sum = a + c;
		}
		else {
			max = c;
			sum = a + b;
		}
		if (max < sum && a == b && b == c && a == c) {
			cout << "Equilateral" << endl;
		}
		else if (max < sum && ((a == b) || (b == c) || (a == c))) {
			cout << "Isosceles" << endl;
		}
		else if (max < sum) {
			cout << "Scalene" << endl;
		}
		else {
			cout << "Invalid" << endl;
		}
		cin >> a >> b >> c;
	}
}