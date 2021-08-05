#include <iostream>

using namespace std;

void in(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

bool testMountain(int arr[], int l, int r) {
	bool test = true;
	int i, j;
	for (i = l; i < r; i++) {
		if (arr[i] <= arr[i + 1]) {
			test = true;
		}
		else { break; }
	}
	for (j = i; j < r; j++) {
		if (arr[j] < arr[j + 1]) {
			test = false;
		}
	}
	return test;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, l, r;
		cin >> n;
		int arr[10000];
		in(arr, n);
		cin >> l >> r;
		if (testMountain(arr, l, r) == true) {
			cout << "Yes" << endl;
		}
		else { cout << "No" << endl; }
	}
	return 0;
}