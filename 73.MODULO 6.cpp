#include <iostream>
#include <string>

using namespace std;

long long modulo(string s, long long n) {
	long long sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum = (sum * 10 + (int)(s[i] - '0')) % n;
	}
	return sum;
}

long long kmod(long long c, long long b, long long m) {
	if (b == 1) { return c; }
	long long d = kmod(c, b / 2, m);
	if (b % 2 == 0) {
		return ((d % m) * (d % m)) % m;
	}
	else {
		return (((d % m) * (d % m)) %m * (c%m)) % m;
	}
}

int main()
{
	int test; 
	cin >> test;
	while (test--)
	{
		string a;
		long long b, m;
		cin >> a >> b >> m;
		long long z = 1;
		long long c = modulo(a, m);
		cout << kmod(c, b, m) << endl;
	}
}

