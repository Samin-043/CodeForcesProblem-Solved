#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k;
        if(n%2==1)
        {
            x=(n+1)/2;
        }
        else
        {
            x=n/2;
        }

        if(x>=k)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i%2==0&&i==j&&k>0)
                    {
                        cout<<"R";
                        k--;
                    }
                    else
                    {
                        cout<<".";
                    }
                }
                cout<<endl;
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
