#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll w,h,n;
        cin>>w>>h>>n;
        ll p=1;
        if(h%2==0&&w%2==0)
        {
            while(w>1&&w%2==0)
            {
                p=p*2;
                w/=2;
            }
            while(h>1&&h%2==0)
            {
                p=p*2;
                h/=2;
            }
        }
        else if(w%2==0)
        {
            while(w>1&&w%2==0)
            {
                p=p*2;
                w/=2;
            }
        }
        else if(h%2==0)
        {
            while(h>1&&h%2==0)
            {
                p=p*2;
                h/=2;
            }
        }
        //cout<<"p : "<<p<<endl;
        if(p>=n)
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
