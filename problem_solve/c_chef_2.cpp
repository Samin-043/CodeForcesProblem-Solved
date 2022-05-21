#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        ll x=2*(n+180);
        ll y=a+b;
        cout<<(x-y);
        cout<<endl;
    }
    return 0;
}

