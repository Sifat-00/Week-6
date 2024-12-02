#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];

        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }

        int pos;
        bool flag = true;

        for(int i=0;i<n-1;i++)
        {
            if(ar[i]>ar[i+1])
            {
                flag = false;
                pos = i;
                break;
            }
        }


        if(flag)
        {
            cout <<"YES" << endl;
        }

        else
        {
            bool track = true;

            for(int i=pos+1;i<n-1;i++)
            {
                if(ar[i] > ar[i+1])
                {
                    track = false;
                    break;
                }
            }

            if(ar[0] < ar[n-1])
            {
                track = false;
            }

            if(track) cout <<"YES" << endl;
            else cout  <<"NO" << endl;
        }
    }
    return 0;
}