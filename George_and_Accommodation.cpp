#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int a,b,c;
    cin>>a;
    int count=0;
    FLI(i,0,a)
    {
       cin>>c>>b;
       if(c!=b && (b-c)>=2)
       {
        count++;
       }
    }
    cout<<count;
    return 0;

}