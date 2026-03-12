#include <iostream>
using namespace std;

int main() {
	int n, p, c;
	string name;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string bn=" ";
		int max = 0;
		cin >> p;
		for (int j = 0; j < p; j++) {
			cin >> c >> name;
			if (max < c) {
				max = c;
				bn = name;
			}

		}
		cout << bn << endl;
	}
}