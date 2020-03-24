//2309 일곱 난쟁이
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//키의합 100
int main() {
	vector<int> key;
	int sum = 0; int k;
	for (int i = 0; i < 9; i++) {
		cin >> k; sum += k;
		key.push_back(k);
	}
	sum -= 100;
	//두명의 키의합은 sum이됨
	int i, j;
	int a, b;
	bool ss = false;
	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 9; j++) {
			if ((key[i] + key[j]) == sum)
			{
				a = key[i];
				b = key[j];
				ss = true;
				break;
			}
		}
		if (ss == true)break;
	}
	sort(key.begin(), key.end());
	for (int t = 0; t < 9; t++) {
	if (key[t] == a || key[t] == b)continue;
	else cout << key[t] << endl;
	}
	return 0;
}