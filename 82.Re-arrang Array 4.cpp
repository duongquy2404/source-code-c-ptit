#include <iostream>
#include <algorithm>

using namespace std;

void in(int a[], int m) {
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, x;
		cin >> n;
		int arr[1000];
		int brr[1000];
		in(arr, n);
		sort(arr, arr + n);
		if (n % 2 == 0) {
			x = n / 2 - 1;
		}
		else { x = n / 2; }
		int j = 0;
		for (int i = 0; i <= x; i++) {
			brr[j] = arr[i];
			j += 2;
		}
		int k = 1;
		for (int i = x + 1; i < n; i++) {
			brr[k] = arr[i];
			k += 2;
		}
		for (int i = 0; i < n; i++) {
			cout << brr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}