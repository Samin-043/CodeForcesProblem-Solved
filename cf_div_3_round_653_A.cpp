#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        int flag=0;
        //while(n>=0)
        //{
        ll ans=0;
        ans=n%x;
        if(ans==y)
        {
            cout<<n;
        }
        else if(ans>y)
        {
            cout<<((n/x)*x)+y;
        }
        else
        {
            cout<<((n/x)-1)*x+y;
        }
        //}
        cout<<endl;
    }
    return 0;
}
