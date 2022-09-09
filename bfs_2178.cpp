#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;

int m, n;
bool map[101][101] = { 0, };
int check[101][101] = { 0, };
int cnt[101][101] = { 0, };
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,1,-1 };

void sol(int s1, int s2) {
	queue<pair<int, int>> test;
	check[s1][s2] = 1;
	cnt[s1][s2] = 1;
	test.push(make_pair(s1, s2));
	while (!test.empty()) {
		int x = test.front().first;
		int y = test.front().second;
		test.pop();
		for (int i = 0; i < 4; i++) {
			int x1 = x+dx[i];
			int y1 = y+dy[i];
			if (x1 < 0 || y1 < 0 || x1 >=m  || y1 >= n)continue;
			if (check[x1][y1] == 0 && map[x1][y1] == 1) {
				check[x1][y1] = 1;
				cnt[x1][y1] = cnt[x][y] + 1;
				test.push(make_pair(x1, y1));
			}
		}
	}
}

int main() {
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < n; j++) {
			char t = tmp[j];
			map[i][j] = atoi(&t);
		}
	}
	
	sol(0,0);
	cout << cnt[m - 1][n - 1];
	return 0;
}