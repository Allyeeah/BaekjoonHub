#include <bits/stdc++.h>
using namespace std;
string s;
void solve() {
    while (getline(cin,s)) {
        while (s.find("BUG")!=-1) {
            s = regex_replace(s, regex("BUG"), "");
        }
        cout << s << "\n";
    }
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    //freopen("input.txt", "r", stdin);
    solve();
        
}