#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        vector<ll>v1;
        for(int i=0; i<n; i++)
        {
            ll num;
            cin>>num;
            v.push_back(num);
            v1.push_back(num);
        }
        sort(v1.begin(),v1.end());
        ll d=0;
        ll x=v1[0];
        for(int i=1; i<n; i++)
        {
            if(v1[i]==v1[i-1])
            {
                d=0;
                x=-1;
                continue;
            }
            else
            {
                d++;
                if(i==1&&d==1)
                {
                    x=v1[i-1];
                    break;
                }
                else if(x<0)
                {
                    if(d==2)
                    {
                        x=v1[i-1];
                        break;
                    }
                    else if(i==n-1&&d==1)
                    {
                        x=v1[i];
                    }
                }
            }
        }
        //cout<<x<<endl;
        if(x<0)
        {
            cout<<x<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(v[i]==x)
                {
                    i++;
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

