//1003 피보나치 함수
#include <iostream>
#include <string.h>
int fib[41][2];
using namespace std;

void init() {
	memset(fib, 0, sizeof(fib));
	fib[0][0] = 1;
	fib[1][1] = 1;
	for (int i = 2; i <= 40; i++) {
		fib[i][0] = fib[i - 1][0] + fib[i - 2][0];
		fib[i][1] = fib[i - 1][1] + fib[i - 2][1];
	}
}
int main() {
	init();
	int N; cin >> N;
	while (N--) {
		int n; cin >> n;
		cout << fib[n][0] << " " << fib[n][1]<<"\n";
	}
	return 0;
}