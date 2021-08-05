#include <iostream>
#include <cmath>

using namespace std;

bool snt(long long n) {
	if (n < 2) { return false; }
	for (long long i = 2; i <= sqrt(n); i++) {
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
		long long n;
		cin >> n;
		int dem = 0;
		for (long long i = 2; i * i <= n; i++) {
			if (snt(i)) {
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}