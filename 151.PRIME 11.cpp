#include <iostream>
#include <cmath>

using namespace std;

bool snt(int n) {
	if (n < 2) { return false; }
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) { return false; }
	}
	return true;
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		long long n;
		cin >> n;
		long long p = 2;
		long long x1 = pow(2, p - 1);
		long long x2 = pow(2, p) - 1;
		while (x1 * x2 < n) {
			p++;
			x1 = pow(2, p - 1);
			x2 = pow(2, p) - 1;
		}
		if (x1*x2==n&&snt(x2)) {
			cout << "1";
		}
		else { cout << "0"; }
		cout << endl;
	}
}