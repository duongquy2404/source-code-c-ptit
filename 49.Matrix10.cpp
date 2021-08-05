#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        int a[100][100];
        int b[100][100];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                b[i][j] = 0;
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1) {
                    for (int k = 0; k < n; k++) {
                        b[k][j] = 1;
                    }
                    for (int h = 0; h < m; h++) {
                        b[i][h] = 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}