#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n,b;
    cin>>n>>b;
    int c;
    int sum=0;
    int sam=0;
    FLI(i,0,n)
    {
        cin>>c;
        if(c>b)
        {
             sum=sum+2;
        }
        else
        {
            sam++;
        }
    }
    int total=sum+sam;
    cout<<total;
    return 0;
    
}