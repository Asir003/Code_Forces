#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)


int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        int sum=0;
        for(int i=2;i<=n;i++)
        {
            int a=(i-1)*4;
            sum+=a;
        }
        cout<<sum+1<<endl;
    }
    return 0;
}