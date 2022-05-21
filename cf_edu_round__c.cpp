#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        ll c1=0,c2=0,total=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                c1++;
            }
            else if(s[i]=='[')
            {
                c2++;
            }
            else if(c1>0&&s[i]==')')
            {
                c1--;
                total++;
            }
            else if(c2>0&&s[i]==']')
            {
                c2--;
                total++;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
