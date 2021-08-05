#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		string a;
		int tongChan = 0;
		int tongLe = 0;
		cin >> a;
		for (int i = 0; i < a.length(); i++) {
			if (i % 2 == 0) {
				tongChan += (int)(a[i]-'0');
			}
			else { tongLe += (int)(a[i]-'0'); }
		}
		if (abs(tongChan - tongLe) % 11 == 0) {
			cout << 1 << endl;
		}
		else { cout << 0 << endl; }
	}
	return 0;
}