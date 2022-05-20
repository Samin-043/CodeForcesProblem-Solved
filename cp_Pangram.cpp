#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string small_letter="abcdefghijklmnopqrstuvwxyz";
    int arr[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<small_letter.size();j++)
        {
            if(s[i]==small_letter[j])
            {
                if(arr[j]==0)
                {
                    arr[j]=1;
                }
                else
                {
                    break;
                }
            }
        }
    }
    sort(arr,arr+26);
    if(arr[0]==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    cout<<endl;
    return 0;
}
