#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		int dem = 0;
		for (int i = m; i <= n; i++) {
			if (i % a == 0 || i % b == 0) {
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}