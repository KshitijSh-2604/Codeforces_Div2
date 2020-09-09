#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int len=s.length(), i=0, flag=0;
    char a='h';
    fo(i,len)
    {
        if (flag==0)
        {
            if (s[i]=='h')
            {
                flag++;
            }
        }
        else if (flag==1)
        {
            if (s[i]=='e')
            {
                flag++;
            }
        }
        else if (flag==2 || flag==3)
        {
            if (s[i]=='l')
            {
                flag++;
            }
        }
        else if (flag==4)
        {
            if (s[i]=='o')
            {
                flag++;
            }
        }
    }
    if (flag==5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}