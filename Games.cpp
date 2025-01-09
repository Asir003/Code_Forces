#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,a,b;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int count=0;
    FLI(i,0,n)
    {
        cin>>a>>b;
        arr1[i]=a;
        arr2[i]=b;
    }
    FLI(i,0,n)
    {
        FLJ(j,0,n)
        {
            if(arr1[i]==arr2[j])
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;

}