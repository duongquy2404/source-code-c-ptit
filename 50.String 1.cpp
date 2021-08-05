#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		string a;
		int k;
		cin >> a >> k;
		if (a.size() < 26) {
			cout << 0 << endl;
		}
		else {
			set<char> s;
			s.insert(a.begin(), a.end());
			if (s.size() + k >= 26) {
				cout << 1 << endl;
			}
			else { cout << 0 << endl; }
		}
	}
	return 0;
}