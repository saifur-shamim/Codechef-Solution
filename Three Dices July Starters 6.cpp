///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define pb push_back

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y;

        cin>>x>>y;

        if(x+y>=6)
        {
            cout<<"0\n";
        }
        else
        {

            double dif=(double) (6-(x+y));
            cout<<showpoint;
            cout<<fixed;
            cout<<setprecision(6);
            cout<<dif/6<<nl;

        }

    }
}
