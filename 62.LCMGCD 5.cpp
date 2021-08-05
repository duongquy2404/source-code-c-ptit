#include <iostream>
#include <algorithm>

using namespace std;

int ucln(int a, int b) {
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

int main()
{
    int test;
    cin >> test;
    while (test--) {
        long long a, x, y;
        cin >> a >> x >> y;
        for (int i = 0; i < ucln(x, y); i++) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}