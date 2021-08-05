#include <iostream>
#include <cmath>

using namespace std;
int a[1000000];
int b[1000000];

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, m;
		cin >> n >> m;
		long long x, y;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i == 0) { x = a[i]; }
			if (x < a[i]) {
				x = a[i];
			}
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			if (i == 0) { y = b[i]; }
			if (y > b[i]) {
				y = b[i];
			}
		}
		cout << x*y << endl;
	}
	return 0;
}