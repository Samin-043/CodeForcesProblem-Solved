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
        int arr[105];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int x=0;
        for(int i=0; i<(n-1); i++)
        {
            //cout<<arr[i]<<" "<<arr[i+1]<<endl;
            if((arr[i+1]-arr[i])<=1)
            {
                continue;
            }
            else
            {
                x=1;
                break;
            }
        }
        if(x==1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}
