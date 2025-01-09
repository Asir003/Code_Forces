#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int count=0;
    FLI(i,1,e+1)
    {
        if(i%a==0 || i%b==0 || i%c==0 || i%d==0)
        {
            count++;
        }
    }
    cout<<count;
}