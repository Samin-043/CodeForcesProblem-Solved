#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin>>n;
        cin.ignore();
        string s;
        getline(cin,s);
        vector<char>v;
        int pos=-1;
        for(int i=0;i<n;i++)
        {
            if(!v.empty()&&v[pos]=='('&&s[i]==')')
            {
                v.pop_back();
                pos--;
            }
            else if(s[i]=='(')
            {
                pos++;
                v.push_back(s[i]);
            }
        }
        int len=v.size();
        cout<<len<<endl;
    }

    return 0;
}
