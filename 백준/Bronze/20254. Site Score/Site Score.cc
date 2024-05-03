#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int Ur, Tr, Uo, To;
	cin >> Ur >> Tr >> Uo >> To;

	cout << 56 * Ur + 24 * Tr + 14 * Uo + 6 * To;

	return 0; 
}