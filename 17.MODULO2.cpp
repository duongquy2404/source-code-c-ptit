#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int a, m;
		cin >> a >> m;
		int n = 0;
		for (int i = 0; i < m; i++) {
			if ((a * i) % m == 1) {
				cout << i << endl;
				n++;
				break;
			}
		}
		if (n == 0) {
			cout << "-1";
		}
	}
	return 0;
}