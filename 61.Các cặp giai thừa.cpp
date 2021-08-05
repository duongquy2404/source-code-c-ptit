#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--) {
        int arr[8];
        for (int i = 0; i < 8; i++) {
            arr[i] = 0;
        }
        int n;
        string a;
        cin >> n >> a;
        for (int i = 0; i < n; i++) {
            switch (a[i] - '0') {
            case 2: {
                arr[2] += 1;
                break;
            }
            case 3: {
                arr[3] += 1;
                break;
            }
            case 4: {
                arr[3] += 1;
                arr[2] += 2;
                break;
            }
            case 5: {
                arr[5] += 1;
                break;
            }
            case 6: {
                arr[5] += 1;
                arr[3] += 1;
                break;
            }
            case 7: {
                arr[7] += 1;
                break;
            }
            case 8: {
                arr[7] += 1;
                arr[2] += 3;
                break;
            }
            case 9: {
                arr[7] += 1;
                arr[3] += 2;
                arr[2] += 1;
                break;
            }
            }
        }
        for (int i = 0; i < arr[7]; i++) { cout << "7"; }
        for (int i = 0; i < arr[5]; i++) { cout << "5"; }
        for (int i = 0; i < arr[3]; i++) { cout << "3"; }
        for (int i = 0; i < arr[2]; i++) { cout << "2"; }
        cout << endl;
    }
    return 0;
}