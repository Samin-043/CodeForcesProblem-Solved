#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int rating;
        cin>>rating;
        if(rating>=1900)
        {
            cout<<"Division 1";
        }
        else if(rating>=1600&&rating<=1899)
        {
            cout<<"Division 2";
        }
        else if(rating>=1400&&rating<=1599)
        {
            cout<<"Division 3";
        }
        else
        {
            cout<<"Division 4";
        }
        cout<<endl;
    }
    return 0;
}
