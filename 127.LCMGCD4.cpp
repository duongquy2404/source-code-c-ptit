#include <iostream>
#include <string>

using namespace std;

long long modulo(long long a, string b)
{
	long long sum = 0;
	for (int i = 0; i < b.length(); i++)
	{
		sum = (sum * 10 + (int)(b[i] - '0')) % a;
	}
	return sum;
}
long long ucln(long long a, string b)
{
	long long b2 = modulo(a, b);
	while (a != b2) {
		if (a > b2) {
			a -= b2;
		}
		else {
			b2 -= a;
		}
	}
	return a;
}
int main()
{
	int test; 
	cin >> test;
	while (test--)
	{
		long long a;
		string b;
		cin >> a >> b;
		cout << ucln(a, b) << endl;
	}
}

