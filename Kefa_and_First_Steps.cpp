#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
        cin>>arr[i];
    }
    int count=1;
    int max=0;
    FLI(i,0,n-1)
    {
            if(arr[i]<=arr[i+1])
            {
               count++;
               if(count>=max)
                {
                    max=count;
                }
            }
            else
            {
                count=1;
            }
    }
    if(max==0)
    {
        cout<<"1";
    }
    else
    {
    cout<<max;
    }
    return 0;
}