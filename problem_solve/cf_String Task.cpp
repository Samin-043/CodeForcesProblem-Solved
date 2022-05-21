#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>v_strl;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='Y'||s[i]=='y'||s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
        {
            continue;
        }
        else
        {
            char dot='.';
            v_strl.push_back(dot);
            char c=s[i];
            if(c>='A'&&c<='Z')
            {
                c+=32;
            }
            v_strl.push_back(c);
        }
    }

    for(int i=0;i<v_strl.size();i++)
    {
        cout<<v_strl[i];
    }
    cout<<endl;
    return 0;
}
