#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

map<char, int> result;

static bool comp(pair<char,int>& a, pair<char, int>& b) {
	return a.second > b.second;
}

int main() {//소문자가 대문자보다 32 큼 96초과면 소문자
	string input;
	cin >> input;
	int size = input.size();
	for (int i = 0; i < size; i++) {
		if (input[i] > 96)//소문자일때
		{
			if (result.find(input[i] - 32) == result.end())//없을때
			{
				result.insert(make_pair(input[i] - 32, 1));
			}
			else {
				result.at(input[i] - 32)++;
			}
		}
		else {//대문자 일때
			if (result.find(input[i]) == result.end())
				result.insert(make_pair(input[i], 1));
			else result.at(input[i])++;
		}
	}
	int sz = result.size();

	vector<pair<char, int>> v(result.begin(), result.end());

	sort(v.begin(),v.end(), comp);
	if (sz > 1) {
		if (v[0].second == v[1].second)cout << "?";
		else cout << v[0].first;
	}
	else cout << v[0].first;

	return 0;
}