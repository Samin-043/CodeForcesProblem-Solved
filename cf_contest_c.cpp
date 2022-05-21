#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        cin.ignore();
        string s;
        getline(cin,s);
        int zero=0,first=0,f=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else if(s[i]=='1'&&f==0)
            {
                first=i;
                f=1;
            }
        }

        cout<<c<<endl;
    }
}
