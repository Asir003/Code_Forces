#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    FLI(i,0,n)
    {
        cin>>arr[i];
    }
    FLI(i,0,n)
    {
        if(arr[i]>1 && (arr[i] & (arr[i]-1))==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}