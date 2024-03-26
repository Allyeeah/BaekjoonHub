#include <iostream>

using namespace std;

int main() {

	long long n;

	cin >> n;



	long long tmp=10;

	

	while(n>=tmp)

	{

		(n%tmp) >= tmp / 2 ? n = ((long long)((int)n / tmp) + 1)*tmp : n = ((long long)(int)n / tmp)*tmp;

		tmp *= 10;

	} 

	cout << n << endl;

}