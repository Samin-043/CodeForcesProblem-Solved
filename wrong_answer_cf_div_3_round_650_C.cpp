#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll zero_find(ll start,ll en,ll k)
{
    ll l1=0,c=0;
    for(int i=start;i<en;i++)
    {
        if(i==start)
        {
            c++;
            l1=(i+k+1);
        }
        else if(i==l1)
        {
            c++;
            l1=(i+k+1);
        }
    }
    return c;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        cin.ignore();
        string s;
        getline(cin,s);
        int zero=0;
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else if(s[i]=='1')
            {
                v.push_back(i);
            }
        }
        int c=0;
        if(zero==n)
        {
            c=zero_find(0,n,k);
        }
        else
        {
            if(k<v[0])
            {
                int x=zero_find(0,v[0]-k,k);
                c+=x;
            }
            for(int i=0; i<(v.size()-1); i++)
            {
                int start=v[i]+k+1;
                int last=v[i+1]-k;
                int q=zero_find(start,last,k);
                c+=q;
            }
            int len=v.size();
            int y=zero_find(v[len-1]+k+1,n,k);
            c+=y;
        }

        cout<<c<<endl;
    }
}
