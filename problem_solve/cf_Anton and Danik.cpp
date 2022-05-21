#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll len;
    cin>>len;
    cin.ignore();
    ll a=0;
    ll d=0;

    for(int i=0;i<len;i++)
    {
        char c;
        cin>>c;
        if(c=='A')
        {
            a++;
        }
        else if(c=='D')
        {
            d++;
        }
    }

    if(a>d)
    {
        cout<<"Anton";
    }
    else if(a<d)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    cout<<endl;
    return 0;
}
