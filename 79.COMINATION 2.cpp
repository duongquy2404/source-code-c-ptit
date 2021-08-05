#include <iostream>

using namespace std;

void out(int a[], int k) {
	for (int i = 1; i <= k; i++) {
		cout << a[i];
	}
	cout << " ";
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		int a[21];
		for (int i = 1; i <= n; i++) {
			a[i] = i;
		}
		int kt = 1;
		while (kt == 1) {
			out(a, k);
			int i = k;
			while (i > 0 && a[i] == n + i - k) { i--; }
			a[i]++;
			if (i > 0) {
				for (int j = i + 1; j <= k; j++) {
					a[j] = a[i] + j - i;
				}
			}
			else {
				kt = 0;
			}
		}
		cout << endl;
	}
	return 0;
}