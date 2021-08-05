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

int main() {
	int test;
	cin >> test;
	while (test--) {
		long long l, r;
		cin >> l >> r;
		long long dem = 0;
		for (long long i = sqrt(l); i <= sqrt(r); i++) {
			if (i * i > l&&snt(i)) {
				dem++;
			}
		}
		cout << dem << endl;
	}
}