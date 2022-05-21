#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            ll value;
            cin>>value;
            v.push_back(value);
        }
        sort(v.begin(),v.end());
        int ct=1;
        bool check=false;
        ll number=0;
        for(int i=0;i<(n-1);i++)
        {
            if(v[i]==v[i+1])
            {
                ct++;
                if(ct==3)
                {
                    number=v[i];
                    check=true;
                    break;
                }
            }
            else
            {
                ct=1;
            }
        }

        if(check==true)
        {
            cout<<number;
        }
        else
        {
            cout<<"-1";
        }

        cout<<endl;
    }
    return 0;
}
