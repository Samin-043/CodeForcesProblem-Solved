#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l2>r1||r2<l1)
        {
            cout<<(l2+l1);
        }
        else
        {
            cout<<max(l1,l2);
        }
        cout<<endl;
    }
    return 0;
}
