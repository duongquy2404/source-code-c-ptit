#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000000];

void in(int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

long long sumMax(int n) {
	long long maxSum = arr[0];
	long long sum = arr[0];
	for (int i = 1; i < n; i++) {
		sum = sum + arr[i];
		if (maxSum < sum) {
			maxSum = sum;
		}
		else if (sum < 0) { sum = 0; }
	}
	return maxSum;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		in(n);
		cout << sumMax(n) << endl;
	}
	return 0;
}