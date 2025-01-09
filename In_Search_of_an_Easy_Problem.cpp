#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n,a;
    cin>>n;
    FLI(i,0,n)
    {
        cin>>a;
        if(a==1)
        {
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}