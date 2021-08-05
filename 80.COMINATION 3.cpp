#include <iostream>

using namespace std;

int n;
int a[21];
int kt[21];

void xuat() {
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << " ";
}

void sinhHoanVi(int k) {
	for (int i = 1; i <= n; i++) {
		if (kt[i]==0) {
			a[k] = i;
			kt[i] = 1;
			if (k == n) {
				xuat();
			}
			else {
				sinhHoanVi(k + 1);
			}
			kt[i] = 0;
		}
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		cin >> n;
		sinhHoanVi(1);
		cout << endl;
	}
	return 0;
}