#include <iostream>
#include <cmath>

using namespace std;

void sinhxau(int a[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == 0) {
			a[i] = 1;
			for (int j = i + 1; j < n; j++) {
				a[j] = 0;
			}
			break;
		}
	}
}

void out(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	cout << " ";
}

int main() {
	int test;
	cin >> test;
	while (test--) {
        int n;
        cin >> n;
		int x = pow(2, n);
		int a[20] = { 0 };
		while (x--) {
			out(a, n);
			sinhxau(a, n);
		}
		cout << endl;
	}
	return 0;
}