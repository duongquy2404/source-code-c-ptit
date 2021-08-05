#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1;
	getline(cin, s1);
	string s2;
	getline(cin, s2);
	s1 = s1 + ' ';
	int n = s1.find(s2);
	if (n != -1) {
		s1.erase(n, s2.length() + 1);
	}
	for (int i = 0; i < s1.length(); i++) {
		cout << s1[i];
	}
	return 0;
}