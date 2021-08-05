#include <iostream>

using namespace std;

void in(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n,x,y;
		cin >> n;
		int a[1000];
		int b[1000];
		in(a, n);
		in(b, n);
		int lenMax = 0;
		for (int i = 0; i < n; i++) {
			x = 0;
			y = 0;
			for (int j = i; j < n; j++) {
				x += a[j];
				y += b[j];
				if (x == y && lenMax<j-i+1) {
					lenMax = j - i + 1;
				}
			}
		}
		cout << lenMax << endl;
	}
	return 0;
}