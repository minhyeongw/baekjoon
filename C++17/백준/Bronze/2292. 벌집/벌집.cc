#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 1;
	int layer = 1;
	while (n > cnt) {
		cnt += 6 * layer;
		layer++;
	}
	cout << layer;
}