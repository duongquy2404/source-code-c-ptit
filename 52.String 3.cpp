#include <iostream>
#include <string>
#include <stack>
#include <cmath>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		string a;
		cin >> a;
		stack<int> stk;
		int p = 0;
		long long dec = 0;
		for (int i = 0; i < a.size(); i++) {
			stk.push((int)(a[i]-'0'));
		}
		while (!stk.empty()) {
			int x;
			if (p % 4 == 0) { x = 1; }
			if (p % 4 == 1) { x = 2; }
			if (p % 4 == 2) { x = 4; }
			if (p % 4 == 3) { x = 3; }
			dec += stk.top() * x;
			stk.pop();
			p++;
		}
		if (dec % 5 == 0) {
			cout << "Yes" << endl;
		}
		else { cout << "No" << endl; }
	}
	return 0;
}