#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void in(vector<int>& vtr, int n) {
	int j;
	for (int i = 0; i < n; i++) {
		cin >> j;
		vtr.push_back(j);
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		vector<int> vtr;
		in(vtr, n);
		sort(vtr.begin(), vtr.end());
		for (int i = 0; i < n / 2; i++) {
			cout << vtr[n - i - 1] << " " << vtr[i] << " ";
		}
		if (n % 2 != 0) { cout << vtr[n / 2]; }
		cout << endl;
	}
}