#include <iostream>
#include <cmath>

using namespace std;

long long bcnn(long long a, long long b) {
    long long x = a * b;
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return x / a;
}

int main()
{
    int test;
    cin >> test;
    while (test--) {
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        long long gcd = bcnn(bcnn(x, y), z);
        long long i = pow(10, n - 1) / gcd;
        while ((gcd * i) < pow(10, n - 1)) { i++; }
        if ((gcd * i) < pow(10, n)) {
            cout << gcd * i;
        }
        else {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}