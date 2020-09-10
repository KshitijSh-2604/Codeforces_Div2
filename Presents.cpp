#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int x[n],a[n];
    fo(i,n) 
    {
        cin >> x[i];
    }
    fo(i,n) 
    {
        a[x[i]]=i+1;
    }
    for (int i=1; i<n+1; i++) 
    {
        cout << a[i]<<" ";
    }
    return 0;
}