#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int c=0,min_zero=0,min_one=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                min_zero++;
            }
            else
            {
                min_one++;
            }
        }
        c=min(min_one,min_zero);
        if(c%2==1)
        {
            cout<<"DA";
        }
        else
        {
            cout<<"NET";
        }
        cout<<endl;
    }
    return 0;
}
