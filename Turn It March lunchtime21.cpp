///Bismillahir Rahmanir Rahim
///Happy Coding

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string ans;
    while(t--)
    {
        int u, v, a, s;
        cin>>u>>v>>a>>s;
        if(u <= v)
        {
            ans = "Yes";
        }
        else
        {
            if((u*u - v*v) <= (2*a*s))
            {
                ans = "Yes";
            }
            else
            {
                ans = "No";

            }
        }
            cout<<ans<<endl;

    }

    return 0;

}
