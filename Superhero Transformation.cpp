#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    //string vowel="aeiou";
    bool ck=true;
    int len=s1.size();
    int len1=s2.size();
    if(len1!=len)
    {
        ck=false;
    }
    for(int i=0;i<s1.size();i++)
    {
        if(ck==false)
        {
            break;
        }
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
            if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
            {
                continue;
            }
            else
            {
                ck=false;
                break;
            }
        }
        else
        {
            if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
            {
                ck=false;
                break;
                //continue;
            }
            else
            {
                continue;
            }
        }
    }
    if(ck==false)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    cout<<endl;
    return 0;
}
