#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int a[100];
		long long sumMax = 1;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sumMax *= a[i];
		}
		long long sum;
		for (int i = 0; i < n - 1; i++) {
			sum = a[i];
			for (int j = i + 1; j < n; j++) {
				sum *= a[j];
				if (sum > sumMax) { sumMax = sum; }
			}
		}
		cout << sumMax << endl;
	}
	return 0;
}