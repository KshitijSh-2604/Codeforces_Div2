#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int flag=0;
    int a[12]= {4,7,47,74,44,444,447,474,477,777,774,744};
    for(int i=0; i<12 ;i++)
    {
	    if(N%a[i]==0)
        {
		    flag=1;
	    }
    }
    if (flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}