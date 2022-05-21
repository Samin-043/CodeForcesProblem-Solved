#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[105],m,flag;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        m=arr[0];
        int c;
        flag=c=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>m)
            {
                m=arr[i];
                c++;
            }
            else if((arr[i]<m)&&c>0)
            {
                c=0;
                flag=1;
                break;
            }
        }
        if(flag==1)
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
