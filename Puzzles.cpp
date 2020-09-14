#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, f[1000], i;
    cin >> n >> m;
    fo(i,m)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    int min = f[n-1] - f[0];
    fo(i,m-n+1)
    {
        if ((f[i+n-1]-f[i])<min)
        {
            min = f[i+n-1]-f[i];
        }
    }
    cout << min << endl;
    return 0;
}