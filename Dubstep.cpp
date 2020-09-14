#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n=s.length(), i, flag=1;
    fo (i,n)
    {
        if (s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B')
        {
	        i+=2;
	        if (flag==1)
            {
	            cout << " ";
                flag=0;
	        }
	    }
        else
        {
	        flag=1;
	        cout << s[i];
	    }
    }
    return 0;
}