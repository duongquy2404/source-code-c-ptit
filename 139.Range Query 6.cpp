#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		long long a[1000];
		long long b[1000];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		for (int i = 1; i < n; i++) {
			long long tmp = 0;
			for (int j = 0; j < i; j++) {
				if (a[j] < a[i]&&tmp < b[j]) {
					tmp = b[j];
				}
			}
			b[i] += tmp;
		}
		long long sumMax = 0;
		for (int i = 0; i < n; i++) {
			if (sumMax < b[i]) {
				sumMax = b[i];
			}
		}
		cout << sumMax << endl;
	}
	return 0;
}