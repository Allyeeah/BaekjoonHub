#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int N, D;
queue<pair<int, bool>> que;
pair<int, bool> arr[333][3];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N; N /= 3;
	for (int i = 0; i < N; i++) {
		que.push(make_pair(3 * i + 1, 1));
		que.push(make_pair(3 * i + 2, 1));
		que.push(make_pair(3 * i + 3, 1));
	}
	cin >> D;
	while (D--) {
		for (int r = 0; r < N; r++) {
			for (int c = 0; c < 3; c++) {
				arr[r][c] = que.front();
				que.pop();
			}
		}
		string s; cin >> s;
		if (s != "first") {
			for (int r = 0; r < N; r++) arr[r][0].second = 0;
		}
		if (s != "second") {
			for (int r = 0; r < N; r++) arr[r][1].second = 0;
		}
		if (s != "third") {
			for (int r = 0; r < N; r++) arr[r][2].second = 0;
		}
		for (int c = 0; c < 3; c++) {
			for (int r = 0; r < N; r++) {
				que.push(arr[r][c]);
			}
		}
	}

	while (!que.empty()) {
		if (que.front().second) cout << que.front().first << ' ';
		que.pop();
	}
}