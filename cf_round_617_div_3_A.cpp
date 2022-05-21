#include<bits/stdc++.h>
using namespace std;
long long int arr[1000007];
int main()
{
    long long int i,t,n,sum,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=c=d=0;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2==0)
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        if(sum%2==1)
        {
            cout<<"YES"<<endl;
        }
        else if(c>0&&d>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
