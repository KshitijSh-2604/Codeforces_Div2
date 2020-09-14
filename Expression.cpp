#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=1;i<n;i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int m[] = {a+b+c, a*b*c, a+b*c, a*b+c, (a+b)*c, a*(b+c)};
    int mx = m[0];
    fo(i,6)
    {
        if (m[i]>mx)
        {
            mx=m[i];
        }
    }
    cout << mx;
}