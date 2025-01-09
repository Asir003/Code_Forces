#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n,a,b;
    int total=0;
    int max=0;
    cin>>n;
    FLI(i,0,n)
    {
        cin>>a>>b;
        total=total-a+b;
        if(total>max)
        {
            max=total;
        }

    }
    cout<<max;
    return 0;
}