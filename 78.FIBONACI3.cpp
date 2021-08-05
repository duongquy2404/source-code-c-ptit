#include <iostream>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	vector<int> vtr;
	int f0 = 0, f1 = 1;
	vtr.push_back(f0);
	vtr.push_back(f1);
	int fn;
	while (f0 + f1 <= 1000) {
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		vtr.push_back(fn);
	}
	while (test--) {
		int n;
		cin >> n;
		int a[100];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < vtr.size(); j++) {
				if (a[i] == vtr[j]) {
					cout << a[i] << " ";
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}