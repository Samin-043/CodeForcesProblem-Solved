#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,a;
        cin>>l>>r>>a;
        ll c1,c2,c3,c4,max_val=0;
        c1=(l/a)+(l%a);
        max_val=max(c1,max_val);

        c2=(r/a)+(r%a);
        max_val=max(c2,max_val);

        ll temp=a-1;
        if(temp>=l&&temp<=r)
        {
            c3=(temp/a)+(temp%a);
            max_val=max(c3,max_val);
        }

        ll temp1=r;
        temp1=temp1-1;
        if(temp1>=l&&temp1<=r)
        {
            c4=(temp1/a)+(temp1%a);
            max_val=max(c4,max_val);
        }

        ll al=(r/a);
        al=al*a;
        al=al-1;
        if(al>=l&&al<=r)
        {
            ll c5;
            c5=(al/a)+(al%a);
            max_val=max(c5,max_val);
        }

        cout<<max_val<<endl;
    }
    return 0;
}
