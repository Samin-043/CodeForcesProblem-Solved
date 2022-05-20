#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int small=0;
    int capital=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            small++;
        }
        else
        {
            capital++;
        }
    }
    if(capital>small)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]=s[i]-32;
            }
        }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                continue;
            }
            else
            {
                s[i]=s[i]+32;
            }
        }
    }

    cout<<s<<endl;
    return 0;
}
