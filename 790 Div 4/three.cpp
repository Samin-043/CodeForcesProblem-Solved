#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll arr[205][205];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>arr[i][j];
            }
        }

        ll sum=0;
        for(int i=1,j=1;j<=m;i++,j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<endl;

        ll sum1=0;
        for(int i=n,j=1;j<=m;i--,j++)
        {
            sum1+=arr[i][j];
        }
        cout<<sum1<<endl;


    }
    return 0;
}

