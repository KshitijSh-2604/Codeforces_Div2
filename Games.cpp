#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int num=0;
    vector<int> a(n), b(n);
    fo(i,n)
    {
        cin >> a[i] >> b[i];
        fo(j,i)
        {
            if (a[i]==b[j])
            {
                num+=1;
            }
            if (b[i]==a[j])
            {
                num+=1;
            }
        }
    }
    cout << num;
    return 0;
}