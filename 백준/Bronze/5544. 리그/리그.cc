#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> arr[100];
int ans[101];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;
	
	for (int i = 0; i < N; i++) arr[i].second = i + 1;
	
	int A, B, C, D;
	while (cin >> A >> B >> C >> D) {
		A--; B--;
		if (C < D) arr[B].first += 3;
		else if (C > D) arr[A].first += 3;
		else arr[A].first++, arr[B].first++;
	}

	sort(arr, arr + N);

	ans[arr[N - 1].second] = 1;
	int r = 1;
	for (int i = N - 2; i > -1; i--) {
		if (arr[i].first != arr[i + 1].first) r = N - i;
		ans[arr[i].second] = r;
	}

	for (int i = 1; i <= N; i++) cout << ans[i] << '\n';
}