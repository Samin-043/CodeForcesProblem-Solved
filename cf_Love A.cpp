#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    int cnt_a=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            cnt_a++;
        }
    }
    int len=s.size();
    int rem=abs(cnt_a-len);
    if(cnt_a>rem)
    {
        cout<<len;
    }
    else
    {
        cout<<cnt_a+cnt_a-1;
    }
    cout<<endl;
    return 0;
}
