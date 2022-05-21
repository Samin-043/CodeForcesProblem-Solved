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
        int len=s.size();
        int c=0;
        //vector<char>v;
        //vector<char>zero;
        int one=0;
        int zero=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='1')
            {
                one++;
                if(zero>=one)
                {
                    c++;
                    one--;
                }
                if(zero>0)
                {
                    zero--;
                }
            }
            else
            {
                zero++;
                if(one>=zero)
                {
                    c++;
                    zero--;
                }
                if(one>0)
                {
                    one--;
                }
            }
        }
        cout<<c<<endl;
        if(c==0)
        {
            cout<<"NET";
        }
        else if(c>0)
        {
            if(c%2==1)
            {
                cout<<"DA";
            }
            else
            {
                cout<<"NET";
            }
        }
        cout<<endl;
    }
    return 0;
}
