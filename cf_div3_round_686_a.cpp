#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k=2;
        for(int i=0;i<n-1;i++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<"1";
        cout<<endl;
    }
    return 0;
}
