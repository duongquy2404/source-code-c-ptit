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
	int a[10000];
	for (int i = 0; i < 10000; i++) {
		a[i] = 1;
	}
	for (int i = 0; i < 10000; i++) {
		if (a[i] == 1) {
			if (snt(i)) {
				for (int j = 2 * i; j < 10000; j += i) {
					a[j] = 0;
				}
			}
			else {
				a[i] = 0;
			}
		}
	}
	while (test--) {
		int n;
		int kt = 0;
		cin >> n;
		for (int i = 2; i <= n; i++) {
			if (a[i] == 1) {
				for (int j = 2; j <= n; j++) {
					if (a[j] == 1) {
						if (i + j == n) {
							cout << i << " " << j << endl;
							kt++;
							break;
						}
					}
				}
			}
			if (kt > 0) { break; }
		}
	}
	return 0;
}