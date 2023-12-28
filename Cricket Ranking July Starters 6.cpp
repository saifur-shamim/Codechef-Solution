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
        int r1,r2,w1,w2,c1,c2;
        cin>>r1>>w1>>c1>>r2>>w2>>c2;

        if( (r1>r2 && w1>w2 && c1>c2) || (r1>r2 && w1>w2) || (r1>r2 && c1>c2) || (w1>w2 && c1>c2))
        {
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }
}
