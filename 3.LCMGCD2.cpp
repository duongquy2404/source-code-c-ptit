#include <iostream>
#include <cmath>

using namespace std;

long long GCD(long long a, long long b) {
    while (a * b != 0) {
        if (a > b) {
            a %= b;
        }
        else {
            b %= a;
        }
    }
    return a + b;
}
long long LCM(long long a, long long b) {
    return (a * b) / GCD(a, b);
}

int main() {
	int test;
	cin >> test;
	while (test--) {
        unsigned long long n;
		cin >> n;
        unsigned long long x = 1;
        for (int i = 2; i <= n; i++) {
            x = LCM(x, i);
        }
        cout << x << endl;
	}
	return 0;
}