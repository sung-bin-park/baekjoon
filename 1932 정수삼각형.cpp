//1932 Á¤¼ö»ï°¢Çü
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[501][501];
int dp[501][501];
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            cin >> arr[i][j];
    dp[0][0] = arr[0][0];
    dp[1][0] = arr[1][0];
    dp[1][1] = arr[1][1];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)dp[i][j] = arr[i][j] + dp[i - 1][j];
            else if (j == i)dp[i][j] = arr[i][j] + dp[i - 1][j - 1];
            else {
                dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
            }
        }
    }
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxx < dp[n - 1][i])maxx = dp[n - 1][i];
    }
    cout << maxx;

    return 0;
}