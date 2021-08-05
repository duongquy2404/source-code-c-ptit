#include <iostream>
#include <cmath>

using namespace std;

bool snt(int n) {
	if (n < 2) { return 0; }
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
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			if (i == 1) {
				cout << "1 ";
			}
			else {
				for (int j = 2; j <= i; j++) {
					if (i % j == 0 && snt(j)) {
						cout << j << " ";
						break;
					}
				}
			}
		}
		cout << endl;
	}
}