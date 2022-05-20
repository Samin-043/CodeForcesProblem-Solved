#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string>vec_s;
    for(int i=0;i<n;i++)
    {
        string team;
        cin>>team;
        vec_s.push_back(team);
    }
    sort(vec_s.begin(),vec_s.end());
    int total=0,ct=0,pos=0;
    string winner;
    for(int i=0;i<vec_s.size();i++)
    {
        if(vec_s[pos]==vec_s[i])
        {
            ct++;
            //sum[pos]++;
        }
        else
        {
            total=max(total,ct);
            winner=vec_s[pos];
            pos=i;
            ct=1;
            continue;
        }
    }
    if(ct>total)
    {
        winner=vec_s[pos];
    }

    cout<<winner<<endl;
}
