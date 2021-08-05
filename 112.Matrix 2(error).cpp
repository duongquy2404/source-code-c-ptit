#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int count = 0;
		int max = 1;
		int a[100][100];
		int b[100001] = { 0 };
		int d[100001];
		for (int i = 0; i <= 100000; i++) {
			d[i] = 100;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				if (max < a[i][j]) { max = a[i][j]; }
			}
		}
		int k, h;
		for (k = 0; k < n; k++) {
			int c[100001];
			for (int i = 0; i < 100000; i++) {
				c[i] = 0;
			}
			for (h = 0; h < n; h++) {
				if (c[a[k][h]] == 0) {
					b[a[k][h]]++;
				}
				c[a[k][h]]++;
			}
			if (c[a[k][h]] < d[a[k][h]]) { d[a[k][h]] = c[a[k][h]]; }
		}
		for (int i = 0; i <= max; i++) {
			if (b[i] == n) {
				count+=d[i];
			}
		}
		cout << count << endl;
	}
	return 0;
}