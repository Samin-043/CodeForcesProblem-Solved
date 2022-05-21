#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll x=max(a,b);
        x=max(x,c);
        if(x==a&&x==b&&x==c)
        {
            cout<<(x-a)+1<<" "<<(x-b)+1<<" "<<(x-c)+1;
        }
        else if((x==a&&x==b)||(x==a&&x==c)||(x==b&&x==c))
        {
            cout<<(x-a)+1<<" "<<(x-b)+1<<" "<<(x-c)+1;
        }
        else if(x==a)
        {
            cout<<(x-a)<<" "<<(x-b)+1<<" "<<(x-c)+1;
        }
        else if(x==b)
        {
            cout<<(x-a)+1<<" "<<(x-b)<<" "<<(x-c)+1;
        }
        else if(x==c)
        {
            cout<<(x-a)+1<<" "<<(x-b)+1<<" "<<(x-c);
        }
        cout<<endl;
    }

    return 0;
}
