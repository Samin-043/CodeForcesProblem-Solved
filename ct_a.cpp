#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define size 100000
ll arr[size];
ll brr[size];
ll temp[size];
ll b_temp[size];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        arr[size]= {0};
        brr[size]= {0};
        temp[size]= {0};
        ll sum=k;
        int ab=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            temp[ab]=arr[i];
            ab++;
            //cin>>brr[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>brr[i];

        }
        sort(temp,temp+n);
        int kl=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(temp[i]==arr[j])
                {
                    b_temp[kl]=brr[j];
                    kl++;
                    arr[j]=-1;
                    break;
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            if(temp[i]<=sum)
            {
                sum+=b_temp[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
