#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,a ;
    cin>>n;
    int police=0,crime=0,total=0;
    FLI(i,0,n)
    {
        cin>>a;
        if(a>0)
        {
            police+=a;
        }
        else
        {
            a=a*(-1);
            if(police<a)
            {
                total++;
            }
            //a=a*(-1);
            if(police>0)
            {
                police-=a;
            }
        }
        
    }
    cout<<total;
    return 0;
}