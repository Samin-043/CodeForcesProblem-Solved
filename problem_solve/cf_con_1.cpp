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
        ll a,b;
        if(n%3==0)
        {
            a=(n/3);
            b=(n/3);
        }
        else
        {
            a=(n/3);
            b=(n/3);
            ll b1=2*(b+1);
            ll b2=2*b;
            ll x=(n-a);
            ll y=(n-(a+1));
            if(x==b1)
            {
                b++;
            }
            else
            {
                a++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
