#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define foi(i,n) for(int i=n;i>=0;i--)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    fo(i,n)
    {
        cin >> a[i];
    }
    int max=a[0], min=a[n-1], mn=n-1, mx=0;
    for (int i=1; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
            mx=i;
        }
    }
    foi(i,n-1)
    {
        if(min>a[i])
        {
            min=a[i];
            mn=i;
        }
    }
    int moves;
    if (mx>mn)
    {
        moves=mx+abs(n-2-mn);
    }
    else if (mx<mn)
    {
        moves=mx+abs(n-1-mn);
    }
    cout << moves;
    return 0;
}