//1065ÇÑ¼ö
#include<iostream>
#include<algorithm>
using namespace std;
int eac(int t) {
	int sum = 0;
	int temp[3];
	if (t < 100)return t;
	else if (t == 1000)return eac(999);
	else{
		for (int i = 100; i <= t; i++) {
			int j = i;
			temp[2] = j % 10;
			j /= 10;
			temp[1] = j % 10;
			j /= 10;
			temp[0] = j % 10;
			if ((temp[2] - temp[1]) == (temp[1] - temp[0]))sum++;
		}
	}
	return sum+99;
}

int main() {
	int k; cin >> k;
	cout << eac(k);
	return 0;
}