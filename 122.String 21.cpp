#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		string kq = "";
		int sum = 0;
		vector<int> vtr(256, 0);
		for (int i = 0; i < s.length(); i++) {
			vtr[s[i]]++;
			if (s[i] >= '0' && s[i] <= '9') {
				sum += (int)(s[i]-'0');
			}
		}
		for (int i = 65; i <= 90; i++) {
			while (vtr[i]--) {
				kq += i;
			}
		}
		kq += to_string(sum);
		cout << kq << endl;
	}
	return 0;
}