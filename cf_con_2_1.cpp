#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        //int arr[26]={0};
        vector<ll>v_num;
        for(int i=0; i<n; i++)
        {
            ll value;
            cin>>value;
            v_num.push_back(value);
        }
        sort(v_num.begin(),v_num.end());

        ll start=k;
        ll end=1;
        vector<ll>v_final;
        ll x=(n/k);
        ll y=x*k;
        ll num=v_num[0];
        for(int i=0;i<y;i++)
        {
            if(start==0)
            {
                start=k;
            }
            cout<<start<<" ";
            start--;
        }
        for(int i=y;i<n;i++)
        {
            cout<<"0"<<" ";
        }
        cout<<endl;
    }
    return 0;
}


