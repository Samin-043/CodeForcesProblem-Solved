#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n%2==0&&n/2==m)
        {
            cout<<"YES";
        }
        else if(n%2!=0&&n/2==m)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }

    return 0;
}
