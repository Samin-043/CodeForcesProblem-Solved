
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a>0&&b>0)
        {
            if((a+b)>3)
            {
                ll vl=(a+b)/4;
                if(vl>a)
                {
                    cout<<a;
                }
                else if(vl>b)
                {
                    cout<<b;
                }
                else
                {
                    cout<<vl;
                }

            }
            else
            {
                cout<<"0";
            }
        }
        else
        {
            cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}

