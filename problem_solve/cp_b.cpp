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
        ll m1=((a+c)%(2*b));
        ll m2=((2*b-a)%c);
        ll m3=((2*b-c)%a);
        if(m1==0)
        {
            cout<<"YES";
        }
        else if((2*b-a)>0 && (m2==0))
        {
            cout<<"YES";
        }
        else if((2*b-c)>0 && (m3==0))
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}

