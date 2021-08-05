#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
        int n,q,l,r;
		cin >> n >> q;
		int a[10000];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < q; i++) {
			cin >> l >> r;
			int sum = 0;
			for (int j = l; j <= r; j++) {
				sum += a[j - 1];
			}
			cout << sum << endl;
		}
	}
	return 0;
}