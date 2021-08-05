#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int a[1000];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int min = 2000;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i] >= a[j]) {
					if (min > a[i] - a[j]) {
						min = a[i] - a[j];
					}
				}
				else {
					if (min > a[j] - a[i]) {
						min = a[j] - a[i];
					}
				}
			}
		}
		cout << min << endl;
	}
	return 0;
}