#include<iostream>
#include<algorithm>
using namespace std;
int sol(long long unsigned n) {
	long long unsigned int tmp = n;
	int min = 0;
	for (int i = 1;; i++) {
		tmp -= i;
		if (tmp >= 0 && tmp<i+1)
		{
			min = i;
			break;
		}
	}
	return min;
}

int main() {
	long long unsigned int s; cin >> s;
	cout << sol(s);

	return 0;
}
