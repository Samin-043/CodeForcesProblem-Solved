#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll s1=2020,s2=2021;
        while(true)
        {
            if(s1>n)
            {
                s1=s1-2020;
                s2=s2-2021;
                break;
            }
            s1+=2020;
            s2+=2021;
        }
        /*cout<<s1<<" "<<s2<<endl;*/
        if(n>=s1&&n<=s2)
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
