#include<iostream>

#define mod 1000000007;

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n, x;
		cin >> n >> x;
		long long a[2005];
		long long p = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			long long c = 1;
			for (int j = 1; j < n - i; j++) {
				c = (c * x) % mod;
			}
			p += (a[i] * c) % mod;
		}
		long long d = p % mod;
		cout << d << endl;
	}
	return 0;
}