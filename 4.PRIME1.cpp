#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n;
		cin >> n;
		while (n % 2 == 0) {
			n /= 2;
			cout << 2 << " ";
		}
		for (long long i = 3; i <= sqrt(n); i+=2) {
			while (n % i == 0) {
				n /= i;
				cout << i << " ";
			}
		}
		if (n > 1) { cout << n; }
		cout << endl;
	}
	return 0;
}