#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string keyboard;
        cin>>keyboard;
        string word;
        cin>>word;
        ll sum=0;
        vector<int>v_value;
        for(int i=0; i<word.size(); i++)
        {
            for(int j=0; j<keyboard.size(); j++)
            {
                if(word[i]==keyboard[j])
                {
                    v_value.push_back(j);
                    break;
                }
            }
        }
        int len=v_value.size();
        if(len>1)
        {
            for(int i=0; i<(v_value.size()-1); i++)
            {
                sum+=abs(v_value[i+1]-v_value[i]);

            }
        }
        else
        {
            sum=0;
        }
        cout<<sum;
        cout<<endl;
    }
    return 0;
}
