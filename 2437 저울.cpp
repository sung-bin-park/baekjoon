//2437 Àú¿ï
#include<iostream>
using namespace std;

int dp[1000001];
int sum = 0;
int main() {
    for (int i = 0; i <= 1000000; i++)dp[i] = 0;
    int n; cin >> n;
    int k;
    int min = 1;

    for (int i = 0; i < n; i++) {
        cin >> k;
        dp[k]++;
        sum += k;
    }
    for (int i = 1; i <= 1000000; i++) {
            if (min<i)break;
            for (int k = 0; k < dp[i]; k++)
                min += i;   
    }
    cout << min;
    return 0;
}
