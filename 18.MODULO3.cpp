#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		long long k;
		cin >> n >> k;
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += i % k;
		}
		cout << sum << endl;
	}
	return 0;
}