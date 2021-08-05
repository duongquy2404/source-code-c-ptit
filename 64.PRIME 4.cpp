#include <iostream>
#include <cmath>

using namespace std;

int snt(int n) {
	if (n < 2) { return false; }
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
			{
				return false;
				break;
			}
		}
		return true;
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			if (i == 1) { cout << 1 << " "; }
			else if (i % 2 == 0) { cout << 2 << " "; }
			else if (snt(i) && i != 2) { cout << i << " "; }
			else {
				for (int j = 3; j <= i; j++) {
					if (i % j == 0) {
						cout << j << " ";
						break;
					}
				}
			}
		}
		cout << endl;
	}
}