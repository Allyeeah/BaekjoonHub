#include <iostream>
using namespace std;

// 최대공약수를 구하는 함수 (유클리드 호제법 이용)
int gcd(int a, int b) {
	int r = a % b;
	if (r == 0) {
		return b;
	}
	else {
		return gcd(b, r);
	}
	
}

int main() {
	int T;        // 테스트 케이스의 개수
	int A, B;
	int lcd;      // 최소공배수

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;

		// 최소공배수 = (A x B) / 최대공약수
		lcd = (A * B) / (gcd(A, B));
		cout << lcd << "\n";
	}

	return 0;
}
