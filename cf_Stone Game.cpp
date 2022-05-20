#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[105];
        cin>>n;
        int max_val=0,max_pos=-1;
        int min_val=INT_MAX,min_pos=-1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(max_val<arr[i])
            {
                max_pos=i;
                max_val=arr[i];
            }
            if(min_val>arr[i])
            {
                min_pos=i;
                min_val=arr[i];
            }
        }

        //cout<<max_pos<<" "<<min_pos<<endl;


        cout<<ct<<endl;

    }
    return 0;
}
