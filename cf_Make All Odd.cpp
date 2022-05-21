#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        ll even=0;
        ll odd=0;
        for(int i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            if(num%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd>=1)
        {
            cout<<even;
        }
        else
        {
            cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}
