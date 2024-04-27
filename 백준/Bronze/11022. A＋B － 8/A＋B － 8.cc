#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false); //동기화 해제
	cin.tie(NULL);

	int c;
	cin >> c;

	for (int i = 1; i <= c; i++) {
		int a, b;
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b<<endl;
	}


	return 0;
}