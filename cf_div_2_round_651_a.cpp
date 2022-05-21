#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll m=0;
        /*for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                ll value=gcd(i,j);
                if(value>m)
                {
                    m=value;
                }
            }
        }*/
        m=n/2;
        cout<<m<<endl;
    }
    return 0;
}
