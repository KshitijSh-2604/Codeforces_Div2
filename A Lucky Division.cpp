#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, rem, flag=1;
    cin >> N;
    int temp=N;
    while (flag==1 && temp!=0)
    {
        rem=temp%10;
        if (rem==4 || rem==7)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
        temp/=10;
    }
    if (flag==0)
    {
        if (N%4==0 || N%7==0)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if (flag==1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}