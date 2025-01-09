#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int t,x,y,d,z,n;
    cin>>t;
    int arr[t];
    FLI(i,0,t)
    {
        cin>>n>>x>>y>>d;
        int l=abs(y-x);
        if(l%d==0)
        {
            if(y>n)
            {
                arr[i]=-1;
            }
            else
            {
                arr[i]=abs(l/d);
            }
        }
        else
        {
            int min=-1;
            if((y-1)%d==0)
            {
                int first=(x-1 + d-1)/d;
                int ftonum=(y-1)/d;
                min=first+ftonum;
            }
            if((n-y)%d==0)
            {
                int last=(n-x+d-1)/d;
                int ltonum=(n-y)/d;
                if(min== -1 || (last + ltonum < min))
                {
                    min=last+ltonum;
                }
            }
            arr[i]=min;
        }
    }
    FLI(i,0,t)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}