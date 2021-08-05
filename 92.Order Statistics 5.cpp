#include<iostream>

#define mod 1000000007;

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		int a[1000];
		int hieu = -1;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] > a[i]) {
					if (a[j] - a[i] > hieu) {
						hieu = a[j] - a[i];
					}
				}
			}
		}
		cout << hieu << endl;
	}
	return 0;
}