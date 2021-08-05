#include <iostream>
#include <algorithm>

using namespace std;

int a[1000000];
int b[1000000];

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, c, d;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				c = i;
				break;
			}
		}
		for (int i = n - 1; i >= 0; i--) {
			if (a[i] != b[i]) {
				d = i;
				break;
			}
		}
		cout << c + 1 << " " << d + 1 << endl;
	}
	return 0;
}