#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int a, b, c;
		cin >> a >> b;
		vector<int> ptr;
		for (int i = 0; i < a * b; i++) {
			cin >> c;
			ptr.push_back(c);
		}
		sort(ptr.begin(), ptr.end());
		for (int i = 0; i < a * b; i++) {
			cout << ptr[i] << " ";
		}
		cout << endl;
	}
}