#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int max, sum;
	if (a >= b && a >= c) {
		max = a;
		sum = b + c;
	}
	else if (b >= c) {
		max = b;
		sum = a + c;
	}
	else {
		max = c;
		sum = a + b;
	}
	while (max >= sum) {
		max -= 1;
	}
	cout << max + sum;
}