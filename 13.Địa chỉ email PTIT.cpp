#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char s[50];
	cin.getline(s, 50);
	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			s[i] += 32;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == ' ') {
			for (int j = i + 1; j < n; j++) {
				cout << s[j];
			}
			for (int k = 0; k < i; k++) {
				if (k == 0 || s[k - 1] == ' ') {
					cout << s[k];
				}
			}
			break;
		}
	}
	cout << "@ptit.edu.vn";

	return 0;
}