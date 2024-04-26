#include <iostream>

using namespace std;

int n, p;
int arrCnt[98], cnt = 0;

int main() {
    cin >> n >> p;
    int temp = n;
    while(true) {
    	temp = (temp * n) % p;
		if(arrCnt[temp] == 2) break;
		arrCnt[temp] += 1;
    }
	for(int i = 0; i < p; i++) {
		if(arrCnt[i] == 2) cnt++;
	}
    cout << cnt << endl;
    return 0;
}