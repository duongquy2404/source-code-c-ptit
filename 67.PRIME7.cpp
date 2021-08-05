#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
        int n;
        cin >> n;
		int kt = 0;
		int x = 0;
		for (int i = 2; i <= sqrt(n); i++) {
			int dem = 0;
			while (n % i == 0) {
				n /= i;
				dem++;
				kt++;
			}
			if (dem > 1) {
				cout << "0" << endl;
				x++;
				break;
			}
		}
		if (n > 1) { kt++; }
		if (x == 0) {
			if (kt == 3) {
				cout << "1" << endl;
			}
			else { cout << "0" << endl; }
		}
	}
	return 0;
}