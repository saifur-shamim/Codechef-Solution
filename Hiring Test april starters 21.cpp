///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,x,y,i;

        cin>>n>>m>>x>>y;

        vector<int>v;

        for(i=0; i<n; i++)
        {
            string s;
            cin>>s;

            int j,sol=0,par=0;
            for(j=0; j<m; j++)
            {
                if(s[j]=='F') sol++;
                else if(s[j]=='P') par++;
            }

            if(sol>=x) v.push_back(1);
            else if(sol==(x-1) && par>=y) v.push_back(1);
            else v.push_back(0);
        }



        for(auto u:v)
        {
            cout<<u;
        }

        cout<<endl;

    }
}
