#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[1000];
		int a[1000];
		int lengthMax = 1;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			a[i] = 1;
		}
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (arr[j] < arr[i]) {
					a[i] = max(a[i], a[j] + 1);
				}
			}
			lengthMax = max(lengthMax, a[i]);
		}
		cout << lengthMax << endl;
	}
	return 0;
}