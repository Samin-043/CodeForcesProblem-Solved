#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    string letter="abcdefghijklmnopqrstuvwxyz";
    int arr[26]={0};
    int ct=0;
    for(int i=0;i<s.size();i++)
    {
        int pos=s[i]-'a';
        if(arr[pos]>0)
        {
            continue;
        }
        else
        {
            arr[pos]++;
            ct++;
        }
    }
    if(ct%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    cout<<endl;
    return 0;
}
