#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		long long b, p;
		cin >> b >> p;
		int count = 0;
		for (long long i = 1; i <= p; i++) {
			if ((i*i) % p == 1) {
				long long last = i + p * (b / p);
				if (last > b) {
					last -= p;
				}
				count += (last - i) / p + 1;
			}
		}
		cout << count << endl;
	}
	return 0;
}