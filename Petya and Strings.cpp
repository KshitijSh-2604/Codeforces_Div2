#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    int flag=0, i=0;
    cin >> s1 >> s2;
    while (flag==0 && i!=s1.length())
    {
        if (tolower(s1[i])==tolower(s2[i]))
        {
            flag=0;
        }
        else if (tolower(s1[i])<tolower(s2[i]))
        {
            flag=-1;
        }
        else
        {
            flag=1;
        }
        i++;
    }
    cout << flag;
    return 0;
}
