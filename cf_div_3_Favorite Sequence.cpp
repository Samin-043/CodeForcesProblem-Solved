#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[305];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n>=3)
        {
            for(int i=0,j=n-1; i<(n/2); i++,j--)
            {
                cout<<arr[i]<<" "<<arr[j]<<" ";
            }
            if(n%2==1)
            {
                cout<<arr[n/2];
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
