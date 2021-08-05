#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, j;
		int kt = 1;
		cin >> n;
		vector<int> ptr;
		for (int i = 0; i < n; i++) {
			cin >> j;
			ptr.push_back(j);
		}
		sort(ptr.begin(), ptr.end());
		for (int i = 0; i < n; i++) {
			if (ptr[i] > 0) {
				if (kt != ptr[i]) {
					if (ptr[i] == ptr[i - 1]) {
						continue;
					}
					else { break; }
				}
				else { kt++; }
			}
		}
		cout << kt << endl;
	}
	return 0;
}