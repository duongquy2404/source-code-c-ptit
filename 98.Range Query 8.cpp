#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k, i, j, h, a, b;
		int arr[1000];
		cin >> n >> k;
		for (h = 0; h < n; h++) {
			cin >> arr[h];
		}
		float pointTB = -1000;
		for (i = 0; i < n - k + 1; i++) {
			float point = 0;
			for (j = i; j < i + k; j++) {
				point += arr[j];
			}
			if (point / k > pointTB) {
				pointTB = point / k;
				a = i;
				b = j - 1;
			}
		}
		for (int c = a; c <= b; c++) {
			cout << arr[c] << " ";
		}
		cout << endl;
	}
	return 0;
}