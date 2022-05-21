#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cin.ignore();
        string s;
        cin>>s;
        for(int i=0;i<s.size();i+=2)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
