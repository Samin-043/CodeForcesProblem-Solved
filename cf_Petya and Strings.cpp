#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    //cin.ignore();
    cin>>s2;
    //cout<<s1<<" "<<s2<<endl;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
        //cout<<s1[i]<<" ";
    }
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]>='A'&&s2[i]<='Z')
        {
            s2[i]=s2[i]+32;
        }
    }
    bool great=false;
    bool small=false;
    bool equaL=false;
    for(int i=0;i<s1.size();i++)
    {
        //cout<<s1[i]<<" "<<s2[i]<<endl;
        if(s1[i]==s2[i])
        {
            equaL=true;
            //continue;
        }
        else if(s1[i]>s2[i])
        {
            equaL=false;
            great=true;
            break;
        }
        else
        {
            equaL=false;
            small=true;
            break;
        }
    }

    if(great==true)
    {
        cout<<"1";
    }
    else if(equaL==true)
    {
        cout<<"0";
    }
    else if(small==true)
    {
        cout<<"-1";
    }
    cout<<endl;
    return 0;

}
