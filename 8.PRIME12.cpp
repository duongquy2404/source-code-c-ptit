#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		int kq = -1;
		for (int i = 2; i <= sqrt(n); i++) {
			while (n % i == 0) {
				n /= i;
				k--;
				if (k == 0) {
					kq = i;
					break;
				}
			}
		}
		cout << kq << endl;
	}
	return 0;
}