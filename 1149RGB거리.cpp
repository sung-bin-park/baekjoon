//1149 RGB°Å¸®
#include<iostream>
#include<algorithm>
using namespace std;
struct rgb {
	int r;
	int g;
	int b;
};
struct rgb rgb[1001];
int total[1001][3];
int main() {
	int sum = 0;
	int N; cin >> N;
	for (int i = 0; i < N;i++) {
		int a, b, c;
		cin >> a >> b >> c;
		rgb[i].r = a;
		rgb[i].g = b;
		rgb[i].b = c;
	}
	total[0][0] = rgb[0].r;
	total[0][1] = rgb[0].g;
	total[0][2] = rgb[0].b;
	for (int i = 1; i < N; i++) {			
		total[i][0] = min(total[i - 1][1], total[i - 1][2]) + rgb[i].r;
		total[i][1] = min(total[i - 1][0], total[i - 1][2]) + rgb[i].g;
		total[i][2] = min(total[i - 1][0], total[i - 1][1]) + rgb[i].b;
		}
	sum = min(min(total[N - 1][0], total[N - 1][1]), total[N - 1][2]);
	cout << sum;
	return 0;
}