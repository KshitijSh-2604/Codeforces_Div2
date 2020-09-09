#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
	cin >> N;
	int a[N];
	int sum=0, count=0;
	for (int i=0; i<N; i++)
    {
		cin >> a[i];
		sum+=a[i];
	}
	sum/=2;
	sort(a,a+N);
	int sum2=0;
	for (int i=N-1; i>=0; i--)
    {
		sum2+=a[i];
		count++;
		if (sum2>sum)
        {
            break;
		}
	}
	cout << count;
    return 0;
}
