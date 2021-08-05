#include <iostream>
#include <string>

using namespace std;

int main() {
	int test;
	cin >> test;
	fflush;
	while (test--) {
		string str;
		cin >> str;
		char a[26] = { 0 };
		for (int i = 0; i < str.size(); i++) {
			a[(int)(str[i] - 'A')]++;
		}
		for (int j = 0; j < str.size(); j++) {
			if (a[(int)(str[j] - 'A')]==1){
				cout << str[j];
			}
		}
		cout << endl;
	}
	return 0;
}