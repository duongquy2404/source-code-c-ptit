#include <iostream>

using namespace std;

long long a[1000000];
long long b[1000000];
long long c[1000000];

void in(long long a[], long long n) {
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		long long n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		in(a, n1);
		in(b, n2);
		in(c, n3);
		long long i = 0, j = 0, k = 0, kt = 0;
		while (i < n1 && j < n2 && k < n3) {
			if (a[i] == b[j] && a[i] == c[k]) {
				cout << a[i] << " ";
				i++;
				j++;
				k++;
				kt = 1;
			}
			else {
				if(a[i]<b[j]){
					i++;
				}
				else {
					if (b[j] < c[k]) {
						j++;
					}
					else { k++; }
				}
			}
		}
		if (kt == 0) { cout << -1; }
		cout << endl;
	}
	return 0;
}