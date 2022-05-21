#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[105];
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int ind=-1;

        if(arr[0]==arr[n-1])
        {
            for(int i=1; i<n; i++)
            {
                if(arr[0]==arr[i])
                {
                    continue;
                }
                else
                {

                    ind=i+1;
                    break;
                }
            }
        }
        else if(arr[1]==arr[n-1])
        {
            ind=1;
        }
        else
        {
            ind=n;
        }
        cout<<ind<<endl;
    }
    return 0;
}
