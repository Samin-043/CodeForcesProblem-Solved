
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll arr[8];
        for(int i=0;i<7;i++)
        {
            cin>>arr[i];
        }
        cout<<(arr[6]-arr[0]-arr[1])<<" "<<arr[0]<<" "<<arr[1]<<endl;
    }
    return 0;
}
