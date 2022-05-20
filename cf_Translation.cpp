#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    bool ck=false;
    for(int i=0,j=(s2.size()-1);i<s1.size()&&j>=0;i++,j--)
    {
        if(s1[i]==s2[j])
        {
            continue;
        }
        else
        {
            ck=true;
            break;
        }
    }

    if(ck==true)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    cout<<endl;

    return 0;
}
