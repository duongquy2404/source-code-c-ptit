#include <iostream>
#include <cmath>

using namespace std;

bool snt(int n) {
	if (n < 2) { return false; }
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0){
			return false;
			break;
		}
	}
	return true;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		for (int i = 2; i * i <= n; i++) {
			if (snt(i)) {
				cout << i*i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}