﻿#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		for (int i = 2; i <= n; i++) {
			int dem = 0;
			while (n % i == 0) {
				n /= i;
				dem++;
			}
			if (dem > 0) { cout << i << " " << dem << " "; }
		}
		cout << endl;
	}
}