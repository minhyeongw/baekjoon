#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x, y;
	int minx = 10000, miny = 10000, maxx = -10000, maxy = -10000;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if (x < minx) { minx = x; }
		if (x > maxx) { maxx = x; }
		if (y < miny) { miny = y; }
		if (y > maxy) { maxy = y; }
	}
	cout << (maxx - minx) * (maxy - miny) << endl;
}