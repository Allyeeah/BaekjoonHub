#include <cstdio>
inline int abs(int a) { return a < 0 ? -a : a; }
char square[4][4];
int main()
{
    for (int i = 0; i < 4; ++i)
        scanf("%s", square[i]);
    int ret = 0;
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            if (square[i][j] != '.')
                ret += (abs((square[i][j] - 'A') / 4 - i) + abs((square[i][j] - 'A') % 4 - j));
    printf("%d\n", ret);
    return 0;
}