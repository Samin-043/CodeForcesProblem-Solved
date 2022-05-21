#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,res;
    scanf("%d",&a);
    res=a-2;
    if(res>0&&res%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    printf("\n");
    return 0;
}
