#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count=1, flag=1;
    string s;
    getline(cin,s);
    if (s.length()<=2)
        cout << 0;
    else if (s.length()==3)
        cout << 1;
    else
    {
        for (int i=4; i<s.length(); i+=3) 
        {
            flag=1;
            for (int j=1; j<i; j+=3)
            {
                if (s[j] == s[i])
                {
                    flag=0;
                }
            }
            if (flag==1)
            {
                count+=1;
            }
        }
        cout << count;
    }
    return 0;
}