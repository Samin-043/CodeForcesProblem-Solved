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
        char c1=s[0];
        char c2=s[1];
        int f,l;
        if(c1=='a')
        {
            f=(c1-'a')*25;
        }
        else
        {
            f=(c1-'a')*25+1;
        }

        l=(c2-'a');
        f+=l;
        if(c1!='a'&&c2>c1)
        {
            f--;
        }
        cout<<f<<endl;
    }
    return 0;
}
