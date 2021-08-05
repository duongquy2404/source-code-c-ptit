#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	fflush;
	while (test--) {
		string str;
		cin >> str;
		int n = 0;
		n += str.size();
		for (int i = 0; i < str.size() - 1; i++) {
			for (int j = i + 1; j < str.size(); j++) {
				if (str[i] == str[j]) {
					n++;
				}
			}
		}
		cout << n << endl;
	}
	return 0;
}