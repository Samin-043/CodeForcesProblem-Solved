#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x=(n*(n+1))/2;
        if(n==(x-1))
        {
            cout<<n+1<<endl;
        }
        else if(n==x)
        {
            cout<<n<<endl;
        }
        else
        {

        }
    }
    return 0;
}
