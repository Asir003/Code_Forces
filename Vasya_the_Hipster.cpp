#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int a,b;
    cin>>a>>b;
    int min,max;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a; 
    }
    int k=max-min;
    int l=k/2;
    cout<<min<<" "<<l;
    return 0;
}