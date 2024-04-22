#include <iostream>
#include <vector>
using namespace std;
 
int L, N; //길이 L, 사람 수 N
int a, b; //조각의 시작과 끝(a ~ b)
int mat[1001]; //롤 케이크 조각들, 조각의 주인을 나타냄
int lie = -1; //가장 많은 조각을 받는다고 가정할 때 가장 많은 조각의 수
int lie_people; //가장 많은 조각을 받는다고 기대한 사람의 번호 
int real = -1; //실제로 가장 많은 조각을 받는을 때 가장 많은 조각의 수
int real_people; //실제로 가장 많은 조각을 받는 사람의 번호
 
int main() {
	cin >> L;
	cin >> N;
 
	//사람의 순서에 따라 조각을 가져간다.
	for (int i = 1; i <= N; i++) {
		cin >> a >> b;
		for (int j = a; j <= b; j++) { //a조각부터 b조각까지 가져간다.
			if (mat[j] != 0) { // 이미 가져간 조각은 
				continue; //못 가져간다.
			}
			mat[j] = i; //조각을 가져간다.
		}
		if (lie < (b - a)) { //b - a를 하여 가져갈 수 있는 조각의 수를 가정, 가장 많은 조각을 가져갈 것으로 예상되는 사람을 고른다.
			lie = b - a;
			lie_people = i;
		}
	}
 
	//실제로 가장 많은 조각을 가져간 사람을 찾음, N명에 대하여 길이 L을 조사했을 때 조각의 주인을 찾는 과정
	for (int i = 1; i <= N; i++) {
		int cnt = 0;
		for (int j = 1; j <= L; j++) {
			if (mat[j] == i) {
				cnt++;
			}
		}
		if (real < cnt) {
			real = cnt;
			real_people = i;
		}
	}
 
	cout << lie_people << '\n';
	cout << real_people << '\n';
}