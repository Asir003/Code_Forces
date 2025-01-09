#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int count=0;
    FLI(i,0,n)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}