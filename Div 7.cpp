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
        if(n%7==0)
        {
            cout<<n;
        }
        else
        {
            int val=
            cout<<((n/7)+1)*7;
        }
        cout<<endl;
    }
    return 0;
}
