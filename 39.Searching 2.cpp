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
		for (auto i = ptr.begin(); i != ptr.end(); i++) {
			if (*i == x) {
				cout << "1";
				dem++;
			}
		}
		if (dem == 0) { cout << "-1"; }
		cout << endl;
	}
	return 0;
}