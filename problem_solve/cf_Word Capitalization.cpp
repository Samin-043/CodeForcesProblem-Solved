#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i==0)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]=s[i]-32;
                cout<<s[i];
            }
            else
            {
                cout<<s[i];
            }
        }
        else
        {
            cout<<s[i];
        }
    }

    cout<<endl;
    return 0;
}
