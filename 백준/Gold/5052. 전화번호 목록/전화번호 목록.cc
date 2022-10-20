#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
        
bool comp(string a, string b) {
	return a.size() < b.size();
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {//50
		int k; cin >> k;
		vector<string> input;
		for (int j = 0; j < k; j++) {//10000
			string s;
			cin >> s;
			input.push_back(s);
		}
		sort(input.begin(), input.end());
		bool chk = 1;

		for (int m = 0; m < k-1; m++) {//10000
			if(input[m].size()!=input[m+1].size())
				if (input[m + 1].find(input[m]) == 0)
				{
				chk = 0;
				break;
				}
		}

		if (chk)cout << "YES" << endl;
		else cout << "NO" << endl;
		input.clear();
	}
	return 0;
}