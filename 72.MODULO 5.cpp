#include <iostream>
#include <string>

using namespace std;

long long modulo(string s, long long n) {
	long long sum = 0;
	for (int i = 0; i < s.size(); i++)
	{
		sum = (sum * 10 + (int)(s[i] - '0')) % n;
	}
	return sum;
}

int main()
{
	int test; 
	cin >> test;
	while (test--)
	{
		string s;
		long long n;
		cin >> s >> n;
		cout << modulo(s, n) << endl;
	}
}

