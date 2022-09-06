#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int sol(string s) {
	int sz = s.size();
	int o = '1';
	int z = o - 1;
	int result = 0;
	int zero = 0, one = 0;
	for (int i = 1; i < sz; i++) {
		if (s[i - 1] != s[i] && s[i - 1] == z) zero++;
		else if (s[i - 1] != s[i] && s[i - 1] == o)one++;
		else continue;
	}
	if (s[0] != s[sz - 1]) {
		if (s[0] == z)one++;
		else zero++;
		}

	if (zero == 0 && one != 0)return 1;
	else if (one == 0 && zero != 0)return 1;

	if (zero > one)result = one;
	else result = zero;
	return result;
}

int main() {
	string input;
	cin >> input;
	cout << sol(input);
	return 0;
}