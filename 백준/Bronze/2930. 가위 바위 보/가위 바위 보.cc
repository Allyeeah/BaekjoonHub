#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int conv[128];

int main() {
	fastio;
	conv['S'] = 0; conv['P'] = 1; conv['R'] = 2;
	int n, m; string s; cin >> m >> s >> n;
	vector<string> v(n);
	vector<vector<int>> cnt(m, vector<int>(3));

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		for (int j = 0; j < m; j++) cnt[j][conv[v[i][j]]]++;
	}

	int t1 = accumulate(v.begin(), v.end(), 0, [&](int ret, string _val) {
		auto f = [&](string a) {
			int ret = 0;
			for (int i = 0; i < m; i++) {
				int t1 = conv[s[i]], t2 = conv[a[i]];
				if (t1 == t2) ret++;
				else if ((t1 + 1) % 3 == t2) ret += 2;
			}
			return ret;
		};
		return ret + f(_val);
	});

	int t2 = accumulate(cnt.begin(), cnt.end(), 0, [&](int ret, vector<int> _val) {
		return ret + max({_val[0] + 2 * _val[1], _val[1] + 2 * _val[2], _val[2] + 2 * _val[0]});
	});

	cout << t1 << '\n' << t2 << '\n';
}