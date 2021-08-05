#include <iostream>
#include <cmath>

using namespace std;

bool snt(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
			break;
		}
	}
	return true;
}

int tongSo(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int tongUoc(int n) {
	int sumUoc = 0;
	while (n % 2 == 0) {
		sumUoc += 2;
		n /= 2;
	}
	for (int i = 3; i <= sqrt(n); i += 2) {
		while (n % i == 0) {
			int j = i;
			while (j > 0) {
				sumUoc += j % 10;
				j /= 10;
			}
			n /= i;
		}
	}
	if (n > 1) {
		while (n > 0) {
			sumUoc += n % 10;
			n /= 10;
		}
	}
	return sumUoc;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		if (snt(n) == false) {
			if (tongSo(n) == tongUoc(n)) {
				cout << "YES";
			}
			else {
				cout << "NO";
			}
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}
}