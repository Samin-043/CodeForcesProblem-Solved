#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<x+(x-1);
        }
        else if(x<y)
        {
            cout<<y+(y-1);
        }
        else
        {
            cout<<x+y;
        }
        cout<<endl;
    }
    return 0;
}
