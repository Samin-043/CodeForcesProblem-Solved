#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    vector<ll>v;
    ll num=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            v.push_back(num);
            num=0;
        }
        else
        {
            num=num*10+s[i]-'0';
        }
    }
    v.push_back(num);
    sort(v.begin(),v.end());
    ll len=v.size();
    cout<<v[0];
    for(int i=1;i<len;i++)
    {
        cout<<"+"<<v[i];
    }
    cout<<endl;
    return 0;
}
