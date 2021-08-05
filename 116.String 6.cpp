#include <iostream>
#include <string>

using namespace std;

long long sumMin(string s1, string s2) {
	long long sumS1 = 0, sumS2 = 0;
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == '6') {
			sumS1 = sumS1 * 10 + 5;
		}
		else {
			sumS1 = sumS1 * 10 + (long long)(s1[i] - '0');
		}
	}
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] == '6') {
			sumS2 = sumS2 * 10 + 5;
		}
		else {
			sumS2 = sumS2 * 10 + (long long)(s2[i] - '0');
		}
	}
	return sumS1 + sumS2;
}

long long sumMax(string s1, string s2) {
	long long sumS1 = 0, sumS2 = 0;
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == '5') {
			sumS1 = sumS1 * 10 + 6;
		}
		else {
			sumS1 = sumS1 * 10 + (long long)(s1[i] - '0');
		}
	}
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] == '5') {
			sumS2 = sumS2 * 10 + 6;
		}
		else {
			sumS2 = sumS2 * 10 + (long long)(s2[i] - '0');
		}
	}
	return sumS1 + sumS2;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		string s1, s2;
		cin >> s1 >> s2;
		cout << sumMin(s1,s2) << " " << sumMax(s1,s2) << endl;
	}
	return 0;
}