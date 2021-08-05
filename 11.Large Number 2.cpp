#include <iostream>
#include <string>

using namespace std;

void compareLength(string &s1, string &s2) {
	if (s1.length() > s2.length()) {
		for (int i = s2.length(); i < s1.length(); i++) {
			s2 = '0' + s2;
		}
	}
	else if (s1.length() < s2.length()) {
		for (int i = s1.length(); i < s2.length(); i++) {
			s1 = '0' + s1;
		}
	}
}

string cong(string &s1, string &s2) {
	string s3 = "";
	compareLength(s1, s2);
	int resultInt;
	int nho = 0;
	for (int i = s1.length() - 1; i >= 0; i--) {
		resultInt = (int)(s1[i]-'0') + (int)(s2[i]-'0') + nho;
		if (resultInt >= 10) {
			nho = 1;
			resultInt -= 10;
		}
		else {
			nho = 0;
		}
		s3 = to_string(resultInt) + s3;
	}
	if (nho == 1) { s3 = '1' + s3; }
	return s3;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		string s1, s2;
		cin >> s1 >> s2;
		cout << cong(s1, s2) << endl;
	}
	return 0;
}
