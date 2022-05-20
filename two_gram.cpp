#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int len;
    cin>>len;
    string s;
    cin>>s;
    vector<string>v_str;
    for(int i=0;i<(len-1);i++)
    {
        string value=s.substr(i,2);
        v_str.push_back(value);
    }
    sort(v_str.begin(),v_str.end());

    int max_ct=1,ct=1,pos=0;
    for(int i=0;i<v_str.size();i++)
    {
        ct=1;
        for(int j=i+1;j<v_str.size();j++)
        {
            if(v_str[i]==v_str[j])
            {
                ct++;
            }
            else
            {
                break;
            }
        }
        if(ct>max_ct)
        {
            max_ct=ct;
            pos=i;
        }
    }
    cout<<v_str[pos]<<endl;
    return 0;
}
