#include<bits/stdc++.h>
#include<string.h>

using namespace std;


bool isAmargan(string a,string b)
{
    int len1=a.length();
    int len2=b.length();

    if(len1!=len2)
        return false;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=0; i<len1; i++)
    {
        if(a[i]!=b[i])
        {
            return false;
        }

    }

    return true;


}


int main()
{
    string a;
    string b;

    getline(cin,a);
    getline(cin,b);

    if(isAmargan(a,b))
    {
        printf("Yes\n");
    }

    else
    {
        printf("No\n");

    }

    return 0;

}
