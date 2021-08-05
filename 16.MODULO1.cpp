#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int x, y;
		long long p;
		cin >> x >> y >> p;
		long long z = 1;
		for (int i = 0; i < y; i++) {
			z = (x * z) % p;
		}
		cout << z << endl;
	}
	return 0;
}