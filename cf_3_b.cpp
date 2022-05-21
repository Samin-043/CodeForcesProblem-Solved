#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll arr[55],brr[55];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>brr[i];
        }
        sort(arr,arr+n);
        sort(brr,brr+n);

        ll x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                x=arr[i];
                if(y>0)
                {
                    break;
                }
            }
            if(brr[i]>0)
            {
                y=brr[i];
                if(x>0)
                {
                    break;
                }
            }
        }
        ll s1=0;
        s1=arr[1]-arr[0];
        //cout<<s1<<endl;
        s1+=brr[1]-brr[0];
        //cout<<s1<<endl;
        for(int i=2; i<(n-1); i++)
        {
            if(arr[i]>x)
            {
                ll candy=arr[i]-x;
                s1+=candy;
            }
            if(brr[i]>y)
            {
                ll orange=brr[i]-y;
                s1+=orange;
            }
        }
        int len=n-1;
        //if(arr[len]>x)
        //{
        if(arr[len]>x&&brr[len]>y)
        {
            ll candy=arr[len]-x;
            ll orange=brr[len]-y;
            if(candy>orange)
            {
                s1+=candy;
            }
            else
            {
                s1+=orange;
            }
        }
        else if(arr[len]>x)
        {
            ll candy=arr[len]-x;
            //ll orange=brr[i]-y;
            s1+=candy;
        }
        else if(brr[len]>y)
        {
            //ll candy=arr[i]-x;
            ll orange=brr[len]-y;
            s1+=orange;
        }
        cout<<s1<<endl;
        //}*/
        //cout<<s1<<endl;
    }
    return 0;
}
