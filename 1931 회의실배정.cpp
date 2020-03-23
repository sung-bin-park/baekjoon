//1931 회의실배정
#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int N;
vector<pair<int, int>> arr;
int srt(vector<pair<int, int>>&);
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int end, start;
		cin >> start >> end;
		arr.push_back(make_pair(end, start));
	}
	sort(arr.begin(), arr.end());
	//끝나는 시간을 오름차순 정렬
	cout << srt(arr);
}

int srt(vector<pair<int, int>>& arr) {
	int sum = 0;
	int crit = arr[0].first;//현재 4
	sum++;
	for (int i = 1; i < N; i++) {
		if (crit > arr[i].second)continue;
		else {
			sum++;
			crit = arr[i].first;
		}
	}
	return sum;
}