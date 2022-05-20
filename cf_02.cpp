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
        ll fist,sec,cost,rem_cost;
        bool ck=false;
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
            ll x,y,z;
            cin>>x>>y>>z;
            if(i==0)
            {
                fist=x;
                sec=y;
                cost=z;
                rem_cost=z;
            }
            else if(x>fist||y<sec)
            {
                if(ck==false)
                {
                    if(x>fist&&y<sec)
                    {
                        cost=cost;
                    }
                    else
                    {
                        cost+=z;
                    }
                }
                else
                {
                    cost=z;
                }
            }
            else
            {
                if(ck==true)
                {
                    v.push_back(cost);
                    continue;
                }
                cost=z;
                ck=true;
            }
            v.push_back(cost);
            if(ck==false)
            {
                cost=rem_cost;
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<endl;
        }
    }
    return 0;
}

