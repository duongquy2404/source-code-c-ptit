﻿#include <iostream>
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
		int m, n;
		cin >> m >> n;
		for (int i = m; i <= n; i++) {
			if (snt(i)) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
}