#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=1;
        for(int i=0;i<n;i++)
        {
            cout<<x<<" ";
            x+=2;
            if(x>=1000)
            {
                x=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
