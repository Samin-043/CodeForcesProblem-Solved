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
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        bool chk=false;
        for(int i=0;i<s1.size();i++)
        {
            if((s3[i]==s1[i])||(s3[i]==s2[i]))
            {
                continue;
            }
            else
            {
                chk=true;
            }
        }

        if(chk==true)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}
