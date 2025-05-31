#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int minh, minv;
	if (x >= (w - x)) {
		minh = w - x;
	}
	else if(w - x > x) {
		minh = x;
	}
	if (y >= (h - y)) {
		minv = h - y;
	}
	else if (y < (h - y)) {
		minv = y;
	}
	if (minh >= minv) {
		cout << minv << endl;
	}
	else {
		cout << minh << endl;
	}
}