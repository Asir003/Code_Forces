#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,a;
    cin>>n>>a;
    int count=0;
    for(int i=1;;i++)
    {
        int k=(i*n);
        if((k%10)==a || k%10==0)
        {
           break;
        }
        count++;
    }
    cout<<count+1;
    return 0;
}