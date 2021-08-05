#include <iostream>
#include <string>

using namespace std;

int main() {
	int test;
	cin >> test;
	cin.ignore();
	while (test--) {
		string str;
		getline(cin, str);
		int n = str.length();
		for (int i = n - 1; i > 0; i--) {
			if (str[i] == ' ' && str[i + 1] != ' ') {
				for (int j = i + 1; j < n; j++) {
					cout << str[j];
					if (str[j + 1] == ' ' || j == n - 1) {
						cout << " ";
						break;
					}
				}
			}
		}
		for (int i = 0; i < n; i++) {
			cout << str[i];
			if(str[i+1]==' '){
				break;
			}
		}
		cout << endl;
	}
	return 0;
}