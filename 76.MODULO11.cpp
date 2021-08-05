#include <iostream>
#include <cmath>

using namespace std;

long long mod(long long e, long long b, long long c) {
	if (b == 1) { return e; }
	long long d = mod(e, b / 2, c);
	if (b % 2 == 0) {
		return (2 * (d % c)) % c;
	}
	else {
		return (e + (2 * (d % c)) % c) % c;
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		long long a, b, c;
		cin >> a >> b >> c;
		long long e = a % c;
		cout << mod(e, b, c) << endl;
	}
}