#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
/*
10757_큰 수 A+B
1140kb	0ms
*/
#include <cstdio>

const int LM = 10000;
char a[LM], b[LM], sum[LM + 1];

int my_strlen(const char *s) {
	int len = 0;
	while (*s++) len++;
	return len;
}

int main() {
#ifdef _WIN32
	freopen("input.txt", "r", stdin);
#endif // _WIN32
	scanf("%s %s", a, b);
	
	int aIdx = my_strlen(a) - 1;
	int bIdx = my_strlen(b) - 1;
	int sIdx = 0;

	while (aIdx >= 0 || bIdx >= 0) {
		if (aIdx >= 0) sum[sIdx] += a[aIdx--] - '0';
		if (bIdx >= 0) sum[sIdx] += b[bIdx--] - '0';

		if (sum[sIdx] > 9) {
			sum[sIdx] %= 10;
			sum[sIdx + 1] = 1;
		}
		++sIdx;
	}
	sIdx += (sum[sIdx]);

	for (int i = sIdx - 1; i >= 0; --i) printf("%d", sum[i]);
	return 0;
}