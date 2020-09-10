#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[5][5], i, j, steps, r, c;
    fo(i,5)
    {
        fo(j,5)
        {
            cin >> a[i][j];
        }
    }
    fo(i,5)
    {
        fo(j,5)
        {
            if (a[i][j]==1)
            {
                r=i;
                c=j;
            }
        }
    }
    steps=abs(2-r)+abs(2-c);
    cout << steps;
    return 0;
}