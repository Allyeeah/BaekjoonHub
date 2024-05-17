#include <iostream>
#include <bitset>
#include <string>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    // 널널하게 200자리까지 탐색
    bitset<200> a, b;
    while (t--)
    {
        cin >> a >> b;
 
        bitset<200> c;
        int flag = 0;
        for (int i = 0; i < a.size(); i++)
        {
            // 이진수의 덧셈 구현
            if (a[i] + b[i] + flag == 3)
            {
                c[i] = 1;
                flag = 1;
            }
            else if (a[i] + b[i] + flag == 2)
            {
                c[i] = 0;
                flag = 1;
            }
            else if (a[i] + b[i] + flag == 1)
            {
                c[i] = 1;
                flag = 0;
            }
            else if (a[i] + b[i] + flag == 0)
            {
                c[i] = 0;
                flag = 0;
            }
        }
 
        // bitset으로 표현되어 있기에.
        // 맨 앞자리부터 체크하여 1을 찾은 후,
        // 해당 인덱스부터 마지막까지만 출력한다.
        string ans = "";
        flag = 0;
        for (int i = 199; i >= 0; i--)
        {
            if (c[i])
            {
                flag = 1;
                ans = ans + to_string(c[i]);
            }
            else if (flag)
            {
                ans = ans + to_string(c[i]);
            }
        }
 
        // 더한 값이 0인 경우 ans가 비어있음.
        if (ans == "")
        {
            cout << "0\n";
        }
        else
        {
            cout << ans << "\n";
        }
 
    }
    return 0;
}