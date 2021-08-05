#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a = new int[1000000];
		int* b = new int[1000000];
		int n,x;
		cin >> n;
		int kt = 0;
		for (int i = 0; i < pow(10,6); i++) {
			b[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[a[i]]++;
			if ((b[a[i]] > 1)&&kt==0) {
				x = a[i];
				kt++;
			}
		}
		if (kt != 0) {
			cout << x << endl;
		}
		else{ cout << "-1" << endl; }
	}
	return 0;
}