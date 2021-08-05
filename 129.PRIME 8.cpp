#include <iostream>

using namespace std;


int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, p;
		cin >> n >> p;
		int count = 0;
		for (int i = 1; i <= n; i++) {
			int m = i;
			while (m % p == 0) {
				count++;
				m /= p;
			}
		}
		cout << count << endl;
	}
	return 0;
}