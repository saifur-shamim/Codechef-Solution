#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    int tc;

    cin>>tc;

    while(tc--)
    {
        int n,a,b,c,cnt=0;

        cin>>n;

        for(a=1; a<=n; a++)
        {
            for(b=a; b<=n; b+=a)
            {
                if(b%a==0)
                {
                    for(c=a; c<=n; c+=b)
                    {
                        if(c%b==a)
                        {
                            cnt++;
                        }
                    }
                }

            }
        }

        cout<<cnt<<nl;
    }
}
