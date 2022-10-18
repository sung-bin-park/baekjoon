#include<iostream>

using namespace std;
int num[10] = { 0, };

int main() {
	int n;
	cin >> n;
	while (n) {
		num[n % 10]++;
		n/=10;
	}
	for (int i = 9; i >= 0; i--) {
		if (num[i]!=0)
			for (int j = 0; j < num[i]; j++)
				cout << i;
		else continue;
	}
	return 0;
}