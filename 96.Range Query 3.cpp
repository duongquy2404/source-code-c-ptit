#include <iostream>
#include <cmath>

using namespace std;

bool snt(int n) {
	if (n < 2) { return false; }
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int a, b;
		cin >> a >> b;
		int count = 0;
		for (int i = a; i <= b; i++) {
			if (snt(i)) {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}