#include<iostream>
#include<string>
#include<vector>
#include<string.h>

using namespace std;
vector<string> input;
//97 122
int check[123] = { 0, };

void sol(vector<string> S) {
	int sum = 0;
	int size = S.size();
	for (int i = 0; i < size; i++) {
		int k = 0;
		int sz = S[i].size();
		for (int j = 0; j < sz; j++) {
			int target = S[i][j];
			int before;
			if(j!=0)before = S[i][j - 1];

			if (check[target] == 0) {
				check[target] = 1;
			}
			else {//check[target]==1
				if (j != 0) {
					if (before == target)continue;
					else k = 1;
				}
				
			}
		}
		if (k == 1) {
			memset(check, 0, sizeof(check));
		}
		else {
			memset(check, 0, sizeof(check));
			sum++;
		}
		
	}

	cout << sum;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		input.push_back(temp);
	}
	sol(input);

	return 0;
}