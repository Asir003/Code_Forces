#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,a;
    cin>>n;
    int max=0;
    int count=0;
    FLI(i,0,n)
    {
        cin>>a;
        count+=a;
        if(a>=max)
        {
            max=a;
        }
    }
    int total=(max*n)-count;
    cout<<total<<endl;
    return 0;
}