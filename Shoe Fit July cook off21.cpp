///Bismillahir Rahmanir Rahim

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
        int ar[4],left=0,right=0;


        for(int i=0; i<3; i++)
        {
            cin>>ar[i];

            if(ar[i]==0)
            {
                left++;
            }
            else
            {
                right++;
            }
        }
        if(left>=1 && right>=1)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"0\n";
        }
    }
}
