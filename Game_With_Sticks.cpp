#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int a,b;
    cin>>a>>b;
    int c=a>b ? (b-0):(a-0);
    if(c%2==0)
    {
        cout<<"Malvika";
    }
    else
    {
        cout<<"Akshat";
    }
    return 0;
}