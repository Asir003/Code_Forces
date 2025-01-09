#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int a,b,c;
    int sum=0;
    cin>>a>>b>>c;
    FLI(i,1,c+1)
    {
        sum=sum+(i*a);
    }
    if(sum>b)
    {
        int total=sum-b;
        cout<<total;
    }
    else
    {
        cout<<'0';
    }
    return 0;
}