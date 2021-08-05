#include <iostream>
#include <string>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		int sumNumber = 0;
		int len = s.length();
		for (int i = 0; i < len; i++) {
			if (s[i] >= '1' && s[i] <= '9') {
				int c = (int)(s[i] - '0');
				for (int j = i + 1; j < len; j++) {
					if (s[j] >= '0' && s[j] <= '9') {
						c = c * 10 + (int)(s[j] - '0');
						if (j == len - 1) { i = j; }
					}
					else {
						i = j - 1;
						break;
					}
				}
				sumNumber += c;
			}
		}
		cout << sumNumber << endl;
	}
	return 0;
}