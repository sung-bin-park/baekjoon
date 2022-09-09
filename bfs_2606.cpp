#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int com[101][101]={0,};
int chk[101] = { 0, };
int cnt = -1;
int computer;
void sol() {
	queue<int> test;
	test.push(1);
	while (!test.empty()) {
		int tmp = test.front();
		test.pop();
		if (chk[tmp] != 1) {
			chk[tmp] = 1;
			cnt++;
			for (int i = 1; i <= computer; i++) {
				if (com[tmp][i] != 0&&chk[i]==0)test.push(i);
			}
		}
	}
	cout << cnt;
}

int main() {
	int n;
	cin >> computer;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		com[a][b] = 1;
		com[b][a] = 1;
	}
	sol();
	return 0;
}