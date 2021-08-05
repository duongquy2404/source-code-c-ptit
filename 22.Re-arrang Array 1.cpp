#include <iostream>
#include <vector>

using namespace std;
vector<long long> vtr(1000000);
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			vtr[i] = -1;
		}
		long long j;
		for (int i = 0; i < n; i++) {
			cin >> j;
			if (j < n) {
				vtr[j] = j;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << vtr[i] << " ";
		}
		cout << endl;
	}
}