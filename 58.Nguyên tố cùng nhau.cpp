#include <iostream>
#include <cmath>

using namespace std;

bool snt(int n) {
	if (n < 2) { return false; }
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
			break;
		}
	}
	return true;
}

int ucln(int a, int b) {
	while (a * b != 0) {
		if (a > b) {
			a %= b;
		}
		else {
			b %= a;
		}
	}
	return a + b;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int x;
		cin >> x;
		int dem = 0;
		for (int i = 1; i < x; i++) {
			if (ucln(i, x) == 1) {
				dem++;
			}
		}
		if (snt(dem)) {
			cout << 1 << endl;
		}
		else { cout << 0 << endl; }
	}
	return 0;
}