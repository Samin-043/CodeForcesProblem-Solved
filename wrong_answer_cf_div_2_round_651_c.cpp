#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int flag=0,c=0;
        while(flag==0)
        {
            int x=0;
            if(n>1)
            {
                /*if(n%2==1)
                {
                    n=1;
                    c++;
                    continue;
                }*/
                for(ll i=3;i<=n;i=i+2)
                {
                    if(n%i==0)
                    {
                        int d=n/i;
                        n=d;
                        x=1;
                        c++;
                        break;
                    }

                }
                if(x==0)
                {
                    n--;
                    c++;
                }
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(c%2==0)
        {
            cout<<"FastestFinger";
        }
        else
        {
            cout<<"Ashishgup";
        }
        cout<<endl;
    }
    return 0;
}
