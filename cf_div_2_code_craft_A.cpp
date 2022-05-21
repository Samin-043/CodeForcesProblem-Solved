#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,sum,i,n,m,arr[100000];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum>=m)
        {
            cout<<m;
        }
        else
        {
            cout<<sum;
        }
        cout<<endl;
    }
    return 0;
}
