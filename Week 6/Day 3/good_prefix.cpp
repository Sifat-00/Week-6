#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }

        long long sum = ar[0];
        int mx = ar[0];

        int cnt = 0;

        if(ar[0] == 0 ) cnt++;


        for(int i=1;i<n;i++)
        {
            mx = max(mx,ar[i]);
            sum+=ar[i];

            if(sum - mx == mx) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}