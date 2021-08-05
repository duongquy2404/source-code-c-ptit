#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, j;
		cin >> n;
		vector<int> ptr;
		for (int i = 0; i < n; i++) {
			cin >> j;
			ptr.push_back(j);
		}
		sort(ptr.begin(), ptr.end());
		for (auto i = ptr.begin(); i != ptr.end(); i++) {
			cout << *i << " ";
		}
		cout << endl;
	}
	return 0;
}