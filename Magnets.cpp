#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    string pre;
    string after;
    cin>>pre;
    int count=1;
    FLI(i,0,n-1)
    {
        cin>>after;
        if(pre!=after)
        {
           count++;
        }
        pre=after;
    }
    cout<<count;
    
    return 0;
}