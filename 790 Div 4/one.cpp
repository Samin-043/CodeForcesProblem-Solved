#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,arr[100];
        cin>>n;
        ll m_v=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(m_v>arr[i])
            {
                m_v=arr[i];
            }
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            if(m_v<arr[i])
            {
                sum+=(arr[i]-m_v);
            }
        }

        cout<<sum<<endl;
    }
    return 0;
}
