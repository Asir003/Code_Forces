#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,a;
    cin>>n>>a;
    int k=240-a;
    int l=0;
    int count=0;
    FLI(i,0,n)
    {
        l+=5;
        k=k-l;
        if(k<0)
        {
            cout<<count;
            return 0;
        }
        count++;
    }
    cout<<count;
    return 0;
}