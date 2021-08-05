#include <iostream>
#include <algorithm>

using namespace std;

int a[1000000];

void in(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		in(a, n);
		sort(a, a + n);
		cout << a[k - 1] << endl;
	}
	return 0;
}