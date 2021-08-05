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
			vtr[i] = 0;
		}
		long long j;
		int x = 0;
		for (int i = 0; i < n; i++) {
			cin >> j;
			if (j != 0) {
				vtr[x++] = j;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << vtr[i] << " ";
		}
		cout << endl;
	}
}