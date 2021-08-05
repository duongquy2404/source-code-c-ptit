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
		int count = 1;
		for (int i = 0; i < n; i++) {
			if(str[i]==' '||str[i]=='\n'||str[i]=='\t'){
				if (str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\t') {
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}