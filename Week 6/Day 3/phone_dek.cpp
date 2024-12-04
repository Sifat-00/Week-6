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

        int cell = ceil(1.0*y/2);

        if(cell==0) cell+= ceil(1.0*x/15);
        else
        {
            int val = 15*s - 4*y;

            if(x>a)
            {
                x-=val;
                cell+= ceil(1.0*x/15);
            }
        }
        cout << cell << endl;
    }
    return 0;
}
