#include <iostream>
#include <vector>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		vector<int> vtr(256, 0);
		int value = 0;
		int address;
		for(int i=0;i<s.length();i++){
			vtr[s[i]]++;
		}
		for (int i = 0; i < 256; i++) {
			if (vtr[i] > value) {
				value = vtr[i];
			}
		}
		if (s.length() - value > value - 1) {
			cout << 1;
		}
		else { cout << 0; }
		cout << endl;
	}
	return 0;
}