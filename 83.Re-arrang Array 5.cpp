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
        int a[1000];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        if (n % 2 == 0) {
            for (int i = 0; i < n / 2; i++) {
                cout << a[n - i - 1] << " " << a[i] << " ";
            }
        }
        else {
            for (int i = 0; i < n / 2; i++) {
                if (i == n / 2) {
                    cout << a[i];
                }
                else {
                    cout << a[n - i - 1] << " " << a[i] << " ";
                }
            }
            cout << a[n / 2];
        }
        cout << endl;
    }
    return 0;
}