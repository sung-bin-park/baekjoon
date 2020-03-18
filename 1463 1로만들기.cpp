//1463 1로만들기
#define INF 987654321
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int dp[1000001];
void algo(int n) {
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	if (n > 4) {
		for (int i = 4; i <= n; i++) {
			if (dp[i]!= -1)continue;
			else {
				int a = INF, b = INF, c = INF;
				if (i % 3 == 0)a = dp[i / 3] + 1;
				if (i % 2 == 0)b = dp[i / 2] + 1;
				c = dp[i - 1] + 1;
				dp[i] = min(a, min(b, c));
			}
		}
	}
}
int main() {
	memset(dp, -1, sizeof(dp));
	int N;
	cin >> N;
	algo(N);
	cout << dp[N];
	return 0;
}