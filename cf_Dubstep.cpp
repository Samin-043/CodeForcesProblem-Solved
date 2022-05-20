#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool fl=false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(fl==true)
            {
                cout<<" ";
                fl=false;
            }
            i+=2;
        }
        else
        {
            cout<<s[i];
            fl=true;
        }

    }
    cout<<endl;
    return 0;
}
