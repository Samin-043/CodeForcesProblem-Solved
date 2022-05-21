#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[1005],b[1005];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        int flag=0,ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    flag=1;
                    ans=a[i];
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
            cout<<"1"<<" "<<ans;
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;

    }
    return 0;
}
