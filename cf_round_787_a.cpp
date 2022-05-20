#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        bool ck=false;

        if(a>=x)
        {
            ck=true;
            x=0;
        }
        if(a<x)
        {
            x=x-a;
        }
        if(b>=y)
        {
            ck=true;
            y=0;
        }
        if(b<y)
        {
            y=y-b;
        }

        if(x==0&&y==0)
        {
            ck=true;
        }
        else
        {
            if(c>=(x+y))
            {
                ck=true;
            }
            else
            {
                ck=false;
            }
        }


        if(ck==true)
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
