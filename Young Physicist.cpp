#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, n, flag=1, sum1=0, sum2=0, sum3=0;
    cin >> n;
    int a[n], b[n], c[n];
    fo(i,n)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    fo(i,n)
    {
        sum1+=a[i];
    }
    fo(i,n)
    {
        sum2+=b[i];
    }
    fo(i,n)
    {
        sum3+=c[i];
    }
    if (sum1==0 && sum2==0 && sum3==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}