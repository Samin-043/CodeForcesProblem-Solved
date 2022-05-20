#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool ck=true;

    for(int i=0; i<s.size(); i++)
    {
        if(i==0)
        {
            ck=false;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            ck=false;
        }
        else
        {
            ck=true;
            break;
        }
    }


    if(ck==false)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            else
            {
                s[i]=s[i]-32;
            }
        }
    }

    cout<<s<<endl;

    return 0;
}

