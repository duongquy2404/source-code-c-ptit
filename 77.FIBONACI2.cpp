#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n;
		cin >> n;
		long long f0 = 0, f1 = 1, fn;
		while (f0 + f1 < n) {
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
		}
		if (f0 + f1 == n || n == 0 || n == 1)cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}