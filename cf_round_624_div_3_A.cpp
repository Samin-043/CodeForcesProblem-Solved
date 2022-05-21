#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=0;
        if(a<b)
        {
            a=b-a;
            c++;
            if(a%2==0)
            {
                c++;
            }
        }
        else if(a>b)
        {
            a=a-b;
            c++;
            if(a%2!=0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}

