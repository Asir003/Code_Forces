#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,a,b,c;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
        cin>>a>>b;
        if(a<b)
        {
           int c=b-a;
           arr[i]=c;
        }
        else
        {
            if(a%b==0)
            {
                arr[i]=0;
            }
            else
            {
                int d=(a/b);
                int f=(d+1)*b;
                int e=f-a;
                arr[i]=e;
            }
        }
    }
    FLI(i,0,n)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}