//2193 ÀÌÁø¼ö
#include<iostream>
using namespace std;
unsigned long long int dp[91];
unsigned long long int algo(int n) {
	if (dp[n] != 0)return dp[n];
	else {
		for (int i = 3; i <= n; i++)dp[i] = dp[i - 1] + dp[i - 2];
		return dp[n];
	}
}
int main() {
	for (int i = 0; i < 91; i++)dp[i] = 0;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	int n; cin >> n;
	cout << algo(n);
	return 0;
}