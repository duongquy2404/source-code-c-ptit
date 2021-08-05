#include <iostream>

using namespace std;

int sum(int n)
{
	int tong = 0;
	while (n > 0) {
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		while (n >= 10) {
			n = sum(n);
		}
		cout << n << endl;
	}
}