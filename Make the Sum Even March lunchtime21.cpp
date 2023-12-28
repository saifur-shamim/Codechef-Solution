///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0,temp;
        int ans = 0;
        vector<int> vec;

        for(int i = 0 ; i < n; i++)
        {
            cin>>temp;
            sum += temp;
            vec.push_back(temp);
        }
        if(sum%2 == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i = 0 ; i < n; i++)
            {

                if(vec[i] == 2)
                {
                    ans = 1;
                    break;
                }
            }
            if(ans == 1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }

    return 0;
}

