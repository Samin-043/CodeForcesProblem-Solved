#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(y>=x&&y%x==0)
        {
            cout<<"1"<<" "<<y/x;
        }
        else
        {
            cout<<"0"<<" "<<"0";
        }
        cout<<endl;
    }
    return 0;
}
