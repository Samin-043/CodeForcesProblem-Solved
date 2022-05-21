#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ct=0;
        cin>>n;
        cin.ignore();
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        bool chk=false;
        int pos1=20000;
        int pos2=20000;
        //cout<<"1st : "<<s1<<"\n2nd : "<<s2<<endl;
        for(int i=0,j=0; i<n,j<n; i++,j++)
        {
            if(s1[i]==s2[j])
            {
                continue;
            }
            else
            {
                if(pos1>10000)
                {
                    pos1=i;
                    ct++;
                }
                else if(pos2>10000)
                {
                    pos2=i;
                    ct++;
                }
                else
                {
                    chk=true;
                    break;
                }
            }

        }

        if(pos1==pos2)
        {
            cout<<"Yes";
        }
        else if(chk==true)
        {
            cout<<"No";
        }
        else if(pos1>10001||pos2>10001)
        {
            cout<<"No";
        }
        else
        {
            if((s1[pos1]==s1[pos2])&&(s2[pos1]==s2[pos2]))
            {
                cout<<"Yes";
            }
            else
            {
                cout<<"No";
            }
        }
        cout<<endl;
    }
    return 0;
}
