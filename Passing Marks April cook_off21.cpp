///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b,c,t,A,B,C;

        cin>>a>>b>>c>>t>>A>>B>>C;

        if(A>=a && B>=b && C>=c && (A+B+C)>=t)
            cout<<"YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
