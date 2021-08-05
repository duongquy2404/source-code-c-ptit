#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, x;
		cin >> n >> x;
		int a[1000];
		int dem = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == x) {
				dem++;
			}
		}
		if (dem != 0) {
			cout << dem << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
	return 0;
}