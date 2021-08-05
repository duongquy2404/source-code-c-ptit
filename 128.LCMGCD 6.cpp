#include <iostream>
#include <cmath>

using namespace std;

long long sdnt(long long a, long long b) {
	while (a * b != 0) {
		if (a > b) {
			a %= b;
		}
		else { b %= a; }
	}
	return a + b;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n, m;
		cin >> n >> m;
		long long sum = (n * (n + 1)) / 2;
		long long a, b;
		b = (sum - m) / 2;
		a = sum - b;
		if (sum <= m) {
			cout << "No" << endl;
		}
		else {
			if (a - b == m && sdnt(a, b) == 1) {
				cout << "Yes" << endl;
			}
			else { cout << "No" << endl; }
		}
	}
	return 0;
}