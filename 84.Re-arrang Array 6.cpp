#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[100000];
        int b[100000];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = 0;
        }
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != 0 && a[i] == a[i + 1]) {
                a[i] = a[i] * 2;
                a[i + 1] = 0;
            }
        }
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                b[j] = a[i];
                j++;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}