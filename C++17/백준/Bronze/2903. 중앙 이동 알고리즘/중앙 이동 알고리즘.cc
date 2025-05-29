#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = 1;
	int b = 1;
	int sum = 9;
	int spot1 = 9;
	for (int i = 0; i < n-1; i++) {
		int spot = (((pow(2, i+1) * a)) * ((pow(2, i+1) * a) + (b)) + (((pow(2, i+1) * a)) + ((pow(2, i+1) * a) + (b))) * ((pow(2, i+1) * a)));
		sum += spot;
	}
	if (n == 1) {
		cout << spot1 << endl;

	}
	else {
		cout << sum << endl;
	}
}