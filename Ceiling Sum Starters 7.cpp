///Bismillahir Rahmanir Rahim
///Happy Coding

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
        int a,b;

        cin>>a>>b;

        if(a==b)
        {
            cout<<"0\n";
        }
        else if(b>a)
        {
            cout<<(b-a)/ 2 + 1<<nl;
        }
        else
        {
            if((a-b)%2==0)
            {
                cout<<(b-a)/2 + 1<<nl;
            }
            else
            {
                cout<<(b-a)/2<<nl;
            }
        }
    }
}
