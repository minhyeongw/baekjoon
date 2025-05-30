#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int num=0;
	int cnt = 0;
	int c = 0;
	for (int i{ 0 }; i <n; i++) {
		if (n % (n-i) == 0) {
			c++;
			if (c == k) {
				num = n/(n-i);
			}
		}
	}
	for (int i{ 1 }; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
		}
	}
	if (cnt < k) {
		cout << 0 << endl;
	}
	else {
		cout << num << endl;
	}
}