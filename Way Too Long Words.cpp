#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s.length()>10)
        {
            cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
