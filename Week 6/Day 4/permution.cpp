#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);

        map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]] = i+1;
        }

        set<int> s;

        for(auto val:mp)
        {
            if(val.first!=val.second)
            {
                s.insert(abs(val.first-val.second));
            }
        }

        int ans = 0;
        for(int x:s)
        {
            ans = __gcd(ans,x);
        }
        cout << ans << endl;
    }
    return 0;
}