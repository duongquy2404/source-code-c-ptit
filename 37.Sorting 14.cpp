﻿#include <iostream>
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
        int dem = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != a[i + 1]) {
                dem = dem + a[i + 1] - a[i] - 1;
            }
        }
        cout << dem << endl;
    }
    return 0;
}