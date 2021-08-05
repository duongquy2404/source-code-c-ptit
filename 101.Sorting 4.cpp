#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[100000];
int b[100000];
int c[100001];
int d[100001];

void in(vector<int>& vtr, int a[], int c[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		vtr.push_back(a[i]);
		c[a[i]] = 1;
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, m;
		for (int i = 0; i < 100001; i++) {
			c[i] = 0;
			d[i] = 0;
		}
		vector<int> vtr;
		cin >> n >> m;
		in(vtr, a, c, n);
		in(vtr, b, d, m);
		sort(vtr.begin(), vtr.end());
		vtr.erase(unique(vtr.begin(), vtr.end()), vtr.end());
		for (int i = 0; i < vtr.size(); i++) {
			cout << vtr[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < 100001; i++) {
			if (c[i] == 1 && d[i] == 1) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}