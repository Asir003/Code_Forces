#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    while(b>=a)
    {
        count++;
        a=a*3;
        b=b*2;
        
    }
    cout<<count;
    return 0;
}