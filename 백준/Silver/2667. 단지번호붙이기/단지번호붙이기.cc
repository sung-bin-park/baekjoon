#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
int apart[26][26] = { 0, };
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int check[26][26] = { 0, };
queue<pair<int,int>> test;
vector<int> cnt;
void sol(int st1,int st2,int N) {
	int sum = 0;
	while(!test.empty()) {
		int x = test.front().first;
		int y = test.front().second;
		test.pop();
		if (check[x][y] == 0&&apart[x][y]==1) {
			check[x][y] = 1;
			sum++;
			int x1, y1;
			for (int i = 0; i < 4; i++) {
				x1 = x + dx[i];
				y1 = y + dy[i];
				if (x1 < 0 || y1 < 0 || x1 >= N || y1 >= N)continue;
				else {
					test.push(make_pair(x1, y1));
				}
			}
		}
	}
	if(sum!=0)cnt.push_back(sum);
}

bool compare(int a, int b) {
	return a < b;
}


int main() {
	int N; cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			//cin >> apart[i][j];
			scanf("%1d", &apart[i][j]);
			if (apart[i][j] == 0)check[i][j] = 1;
		}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			test.push(make_pair(i, j));
			sol(i, j, N);
		}

	cout << cnt.size()<<"\n";
	sort(cnt.begin(), cnt.end(), compare);
	for (int i = 0; i < cnt.size(); i++)cout << cnt[i]<<"\n";
	return 0;
}