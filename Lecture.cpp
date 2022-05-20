#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>a;
    vector<string>b;
    vector<string>c;
    for(int i=0;i<m;i++)
    {
        string word;
        cin>>word;
        string word1;
        cin>>word1;
        a.push_back(word);
        b.push_back(word1);
    }
    for(int i=0;i<n;i++)
    {
        string word1;
        cin>>word1;
        c.push_back(word1);
    }
    //int len1=b[1].size();
    //cout<<len1<<endl;
    vector<string>result;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((c[i]==a[j])||(c[i]==b[j]))
            {
                int len1=a[j].size();
                int len2=b[j].size();
                if(len1<=len2)
                {
                    result.push_back(a[j]);
                    break;
                }
                else
                {
                    result.push_back(b[j]);
                    break;
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
