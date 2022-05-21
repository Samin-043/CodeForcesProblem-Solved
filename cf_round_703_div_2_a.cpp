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
        ll remain_value=0;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            v.push_back(num);
        }
        bool check=false;
        for(int i=0;i<n;i++)
        {
            if(v[i]>=i)
            {
                remain_value+=(v[i]-i);
            }
            else if(v[i]<i)
            {
                ll ax=i-v[i];
                if((ax>remain_value)||(remain_value==0))
                {
                    check=true;
                    break;
                }
                remain_value=(remain_value-ax);
            }
        }
        //cout<<remain_value<<endl;
        if(check==true)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}
