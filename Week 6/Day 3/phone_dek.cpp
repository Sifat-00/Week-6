#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;

        int s = ceil(1.0*y/2);

        if(s==0) s+= ceil(1.0*x/15);
        else
        {
            int a = 15*s - 4*y;

            if(x>a)
            {
                x-=a;
                s+= ceil(1.0*x/15);
            }
        }
        cout << s << endl;
    }
    return 0;
}