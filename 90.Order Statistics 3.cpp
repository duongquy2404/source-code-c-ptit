﻿#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int a[100][100];
        vector<int> b;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                b.push_back(a[i][j]);
            }
        }
        sort(b.begin(), b.end());
        cout << b[k - 1] << endl;
    }
    return 0;
}