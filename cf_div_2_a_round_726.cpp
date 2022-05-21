#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll arr[10005];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        if(sum==n)
        {
            cout<<"0";
        }
        if(sum<n)
        {
            cout<<"1";
        }
        else if(sum>n)
        {
            cout<<sum-n;
        }
        cout<<endl;

    }
    return 0;
}
