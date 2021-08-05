#include <iostream>
#include <algorithm>

using namespace std;

int a[1000000];
int b[1000000];
int c[2000000];

void in(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void noiMang(int a[], int b[], int c[], int n, int m) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for (int j = n; j < m + n; j++) {
        c[j] = b[j-n];
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        in(a, n);
        in(b, m);
        noiMang(a, b, c, n, m);
        sort(c, c + n + m);
        for (int i = 0; i < n + m; i++) {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}