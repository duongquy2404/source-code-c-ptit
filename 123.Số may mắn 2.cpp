#include <iostream>
#include <string>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		string n;
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n.size(); i++) {
			sum += (int)(n[i]-'0');
		}
		if (sum != 0 && sum % 9 == 0) {
			cout << 1 << endl;
		}
		else { cout << 0 << endl; }
	}
	return 0;
}