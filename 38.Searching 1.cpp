#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, j, x;
		cin >> n >> x;
		vector<int> ptr;
		for (int i = 0; i < n; i++) {
			cin >> j;
			ptr.push_back(j);
		}
		int dem = 0;
		for (auto i = 0; i < n; i++) {
			if (ptr[i] == x) {
				cout << i + 1;
				dem++;
				break;
			}
		}
		if (dem == 0) { cout << "-1"; }
		cout << endl;
	}
	return 0;
}