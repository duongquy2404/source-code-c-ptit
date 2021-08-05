#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int a[100];
		int n, k;
		cin >> n >> k;
		int x = 0;
		for (int h = 0; h < n; h++) {
			cin >> a[h];
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i] + a[j] == k) {
					x++;
				}
			}
		}
		cout << x << endl;
	}
	return 0;
}