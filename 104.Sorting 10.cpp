#include <iostream>
#include <set>

using namespace std;

void tachSo(set<int> st, int n) {
	while (n > 0) {
		st.insert(n % 10);
		n /= 10;
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n,m;
		cin >> n;
		set<int> st;
		for (int i = 0; i < n; i++) {
			cin >> m;
			while (m > 0) {
				st.insert(m % 10);
				m /= 10;
			}
		}
		for (set<int>::iterator it = st.begin(); it!=st.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}