//1010 다리놓기
#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;
stack<unsigned int> temp;
unsigned int fact(unsigned int a, unsigned int b) {
	unsigned int t = 1;
	for (unsigned int i = 1; i <= a - b; i++)temp.push(i);
	for (unsigned int i = b; i >= 1; i--)temp.push(i);
	for (unsigned int i = a; i >= 1; i--) {
		unsigned int tp=1;
		t *= i;
		while (!temp.empty()) {
			tp = temp.top();
			if (t >= tp && t % tp == 0) {
				t /= tp;
				temp.pop();
			}
			else break;
		}
	}
	return t;
}
int main() {
	unsigned int N, M;
	int n; cin >> n;
	while (n--) {
		cin >> N >> M;
		cout << fact(M,N) << endl;
	}
	return 0;
}