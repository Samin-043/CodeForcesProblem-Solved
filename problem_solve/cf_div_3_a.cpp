#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll col,row,value;
        cin>>row>>col>>value;
        ll imp_x=(value/row);
        ll rem_x=(value%row);
        ll x;
        if(rem_x==0)
        {
            x=(row*col)-(col-imp_x);
        }
        else
        {
            imp_x++;
            x=(row-1)*col;
            x=x+imp_x;
            ll y=imp_x*row;
            x=x-((y-value)*col);
        }
        cout<<x<<endl;
    }
    return 0;
}
