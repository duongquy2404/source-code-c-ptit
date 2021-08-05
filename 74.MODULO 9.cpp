#include <iostream>
#include <cmath>

using namespace std;
long long a[1005][1005] = {};
const long long m = pow(10, 9) + 7;
int main() {
	
	for (int i = 0; i <= 1000; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == j) {
				a[i][j] = 1;
			}
			else {
				if (j == 1) {
					a[i][j] = i;
				}
				else {
					a[i][j] = (a[i - 1][j] + a[i - 1][j - 1]) % m;
				}
			}
		}
	}
	int test;
	cin >> test;
	while (test--) {
		int n, r;
		cin >> n >> r;
		cout << a[n][r] << endl;
	}
}