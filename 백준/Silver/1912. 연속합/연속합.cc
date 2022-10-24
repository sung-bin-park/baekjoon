#include<iostream>
#include<vector>

using namespace std;

vector<int> arr;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	int max = -1001;
	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		arr.push_back(s);
	}

	for (int i = 0; i < n; i++) {
		sum += arr[i];
		if (sum > max)max = sum;
		if (sum <= 0)sum = 0;
		
	}
	cout << max;
	
	return 0;
}