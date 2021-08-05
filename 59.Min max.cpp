#include <iostream>

using namespace std;

void numberMax(int a[], int m, int s) {
	for (int i = 0; i < m; i++) {
		if (s >= 9) {
			a[i] = 9;
			s -= 9;
		}
		else if(s>=1&&s<=8){
			a[i] = s;
			s = 0;
		}
		else if (s == 0) {
			a[i] = 0;
		}
	}
}

void numberMin(int b[], int m, int s) {
	for (int i = m - 1; i >= 0; i--) {
		if (i == m - 1 && b[i] == 0) {
			b[i] = 1;
		}
		else if(i == m - 1 && b[i] != 0){ break; }
		if (i != m - 1 && b[i] != 0) {
			b[i] -= 1;
			break;
		}
	}
	if (s == 0 && m == 1) { b[0] = 0; }
}

int main() {
	int m, s;
	cin >> m >> s;
	int a[100];
	int b[100];
	if ((m > 1 && s == 0) || s > 9 * m) {
		cout << "-1 -1";
	}
	else {
		numberMax(a, m, s);
		for (int i = 0; i < m; i++) {
			b[i] = a[i];
		}
		numberMin(b, m, s);
		for (int i = m - 1; i >= 0; i--) {
			cout << b[i];
		}
		cout << " ";
		for (int i = 0; i < m; i++) {
			cout << a[i];
		}
	}
	return 0;
}