#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    long long n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        count+=(n & 1);
        n >>=1;
    }
    cout<<count;
    return 0;
}