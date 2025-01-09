#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    int num[n];
    int sum=0;
    FLI(i,0,n)
    {
        cin>>num[i];
        sum=sum+num[i];
    }
    int sam=0;
    int count=1;
    sort(num, num + n, [](int a, int b) { return a > b; });
    FLI(i,0,n)
    {
        
        sam=sam+num[i];
        if(sam<=sum/2)
        {
           count++;
        }
        
    }
    cout<<count;
    return 0;
}
