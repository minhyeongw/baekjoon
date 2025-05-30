#include <iostream>
using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;
	int days = 1;
	days += (v - a) / (a - b);
	if ((v-a)%(a-b)!=0) {
		days++;
	}
	if (a >= v) {
		cout << 1;
	}
	else { cout << days; }

}