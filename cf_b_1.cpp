#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
int prime_check(ll n)
{
    int flag=0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            cout<<(n/2)<<" "<<(n/2)<<endl;
        }
        else
        {
            int flag=prime_check(n);
            if(flag==0)
            {
                cout<<"1"<<" "<<n-1<<endl;
            }
            else
            {
                ll x,f,l;
                for(int i=3; i<=(sqrt(n)*2); i+=2)
                {
                    ll ans=lcm(i,(n-i));
                    if(i==3)
                    {
                        x=ans;
                        f=i;
                        l=(n-i);
                    }
                    else if(ans<x)
                    {
                        x=ans;
                        f=i;
                        l=(n-i);
                    }
                }
                cout<<f<<" "<<l<<endl;
            }
        }
    }
    return 0;
}
