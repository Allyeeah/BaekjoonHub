#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string a, b;
	cin >> a >> b;

	int n = a.size();
	int m = b.size();
	int sameA = -1;
	int sameB = -1; // a와 b가 공유하는 글자의 인덱스

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				sameA = i;
				sameB = j;
				break;
			}
		}
		if (sameA != -1) break;
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == sameB && j == sameA) cout << a[j];
			else if (i == sameB) cout << a[j];
			else if (j == sameA) cout << b[i];
			else cout << ".";
		}
		cout << "\n";
	}

}