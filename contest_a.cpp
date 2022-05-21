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
        int arr[105];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        int max_ct=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                arr[i]=abs(arr[i]);
            }
        }
        sort(arr,arr+n);
        bool ck=false;
        for(int i=0;i<n;i++)
        {
            ck=false;
            if(arr[i]==1000)
            {
                continue;
            }
            max_ct+=1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==0)
                {
                    arr[j]=1000;
                }
                else if(arr[i]==arr[j])
                {
                    ck=true;
                    arr[j]=1000;
                }
                else
                {
                    break;
                }
            }
            if(ck==true)
            {
                max_ct+=1;
            }
        }

        cout<<max_ct<<endl;
    }
    return 0;
}
