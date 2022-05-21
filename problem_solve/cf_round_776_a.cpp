#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        char ch;
        cin>>ch;
        bool ck=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ch&&i%2==0)
            {
                ck=true;
                break;
            }
        }
        if(ck==true)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
