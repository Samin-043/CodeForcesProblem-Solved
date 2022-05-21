#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll ans=(max(a,b)-min(a,b));
        if(ans%10==0)
        {
            cout<<ans/10<<endl;
        }
        else
        {
            ans+=10;
            cout<<ans/10<<endl;
        }

    }
    return 0;
}
