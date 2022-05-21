#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    bool ck=false;
    ll len1=s1.size(),len2=s2.size();
    ll i=(s1.size()-1);
    ll j=(s2.size()-1);

   // cout<<s1[i]<<" "<<s2[j]<<endl;
    while(ck==false)
    {
        if(i>=0&&j>=0)
        {
            if(s1[i]==s2[j])
            {
                i--;
                j--;
                len1--;
                len2--;
                //continue;
            }
            else
            {
                ck=true;
            }
        }
        else
        {
            ck=true;
        }
    }
    //cout<<len1<<" "<<len2<<endl;
    cout<<len1+len2<<endl;
    return 0;
}
