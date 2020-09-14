#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[250];
    int n , p , q, i;
    cin >> n >> p;
    int c=0;
    fo(i,p)
    {
        cin >> a[i];
    }
    cin >> q;
    for (int i=p; i<(p+q); i++)
    {
        cin >> a[i];
    }
    sort(a , a+(p+q));
    fo(i,p+q)
    {
        if (a[i]!=a[i+1])
        {
            c++;
        }
    }
    if (n==c)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}