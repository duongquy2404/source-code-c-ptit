#include <iostream>

using namespace std;
int a[100000];
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, x;
		cin >> n >> x;
		int kt = -1;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = n - 1; i > 0; i--) {
			if (a[i] < x) { break; }
			for (int j = i - 1; j >= 0; j--) {
				if (a[i] - a[j] == x) {
					kt = 1;
					break;
				}
			}
			if (kt == 1) { break; }
		}
		cout << kt << endl;
	}
	return 0;
}