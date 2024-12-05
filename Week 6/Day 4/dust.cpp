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

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long cnt = 0;
        bool flag = false;

        for(int i=0;i<n-1;i++)
        {
            if(v[i]==0 && flag)
            {
                cnt++;
            }
            else if(v[i]!=0)
            {
                flag = true;
                cnt+=v[i];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}